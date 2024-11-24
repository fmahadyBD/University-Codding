package org.example;

import java.io.*;
import java.net.*;
import java.util.Scanner;

public class ClientThread {
    public static void main(String[] args) throws IOException {
        try {
            Socket clientSocket = new Socket("localhost", 5000);
            System.out.println("Connected to the server.");

            Scanner scn = new Scanner(System.in);
            DataOutputStream dos = new DataOutputStream(clientSocket.getOutputStream());
            DataInputStream dis = new DataInputStream(clientSocket.getInputStream());

            while (true) {
                String serverMessage = dis.readUTF();
                System.out.println(serverMessage);

                String clientInput = scn.nextLine();
                dos.writeUTF(clientInput);

                if (clientInput.equalsIgnoreCase("ENDS")) {
                    System.out.println("Disconnecting from the server...");
                    clientSocket.close();
                    break;
                }

                String response = dis.readUTF();
                System.out.println(response);
            }

            dos.close();
            dis.close();
            clientSocket.close();

        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}

