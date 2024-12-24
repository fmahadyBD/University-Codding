package org.cn.scoket;

import java.io.BufferedReader;
import java.io.DataOutputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.net.Socket;

public class ClientOneWay {
    public static void main(String[] args) throws IOException {
        // Establishing a connection to the server at localhost on port 5000
        Socket s = new Socket("localhost", 5000);
        System.out.println("Client Connected at server handshaking port: " + s.getPort());
        System.out.println("Client’s communication port: " + s.getLocalPort());
        System.out.println("Client is Connected");
        System.out.println("Enter the messages that you want to send and type \"stop\" to close the connection:");

        // Setting up output stream to send data to the server
        DataOutputStream output = new DataOutputStream(s.getOutputStream());
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));

        String str = "";

        // Sending messages until the user types "stop"
        while (!str.equals("stop")) {
            str = read.readLine();
            output.writeUTF(str);
        }

        // Closing resources
        output.close();
        read.close();
        s.close();
    }
}

