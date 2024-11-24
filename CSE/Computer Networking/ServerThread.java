package org.example;

import java.io.*;
import java.net.*;

public class ServerThread {
    public static void main(String[] args) throws IOException {
        ServerSocket handshake = new ServerSocket(5000);
        System.out.println("Server started at port " + handshake.getLocalPort());
        System.out.println("Waiting for clients...");

        int clientCount = 0;

        while (clientCount < 5) {
            Socket com_socket = handshake.accept();
            clientCount++;
            System.out.println("Client " + clientCount + " connected: " + com_socket);

            DataOutputStream dos = new DataOutputStream(com_socket.getOutputStream());
            DataInputStream dis = new DataInputStream(com_socket.getInputStream());

            System.out.println("Assigning a new thread for the client...");
            Thread newTunnel = new ClientHandler(com_socket, dis, dos, clientCount);
            newTunnel.start();
        }

        System.out.println("Server has reached the maximum client limit of 5.");
        handshake.close();
    }
}
