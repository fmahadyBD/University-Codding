package org.cn.factorial;

import java.io.*;
import java.net.*;

public class FactorialClient {
    public static void main(String[] args) {
        try (Socket socket = new Socket("localhost", 5000)) {
            System.out.println("Connected to the server.");

            // Set up input and output streams
            BufferedReader in = new BufferedReader(new InputStreamReader(socket.getInputStream()));
            PrintWriter out = new PrintWriter(socket.getOutputStream(), true);
            BufferedReader userInput = new BufferedReader(new InputStreamReader(System.in));

            // Get number from the user
            System.out.print("Enter a number to calculate factorial: ");
            String number = userInput.readLine();

            // Send the number to the server
            out.println(number);

            // Receive and display the response from the server
            String response = in.readLine();
            System.out.println("Response from server: " + response);

        } catch (IOException e) {
            System.err.println("Client exception: " + e.getMessage());
            e.printStackTrace();
        }
    }
}
