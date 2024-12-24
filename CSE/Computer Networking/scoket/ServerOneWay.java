package org.cn.scoket;

import java.io.DataInputStream;
import java.io.IOException;
import java.net.*;

public class ServerOneWay {
    public static void main(String[] args) throws IOException {
        // Creating a ServerSocket on port 5000
        ServerSocket ss = new ServerSocket(5000);
        System.out.println("Server is connected at port no: " + ss.getLocalPort());
        System.out.println("Server is connecting\n");
        System.out.println("Waiting for the client\n");

        // Accepting a client connection
        Socket s = ss.accept();
        System.out.println("Client request is accepted at port no: " + s.getPort());
        System.out.println("Server’s Communication Port: " + s.getLocalPort());

        // Setting up a DataInputStream to receive messages from the client
        DataInputStream input = new DataInputStream(s.getInputStream());
        String str = "";

        // Reading messages until the client sends "stop"
        while (!str.equals("stop")) {
            str = input.readUTF();
            System.out.println("Client Says: " + str);
        }

        // Closing the connection
        s.close();
        input.close();
    }
}
