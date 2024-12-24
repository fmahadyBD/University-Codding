package org.cn.factorial;

import java.io.*;
import java.net.*;

public class FactorialServer {
    public static void main(String[] args) {
        try (ServerSocket serverSocket = new ServerSocket(5000)) {
            System.out.println("Server is running and waiting for a connection...");

            // Accept client connection
            Socket clientSocket = serverSocket.accept();
            System.out.println("Client connected!");

            // Set up input and output streams
            BufferedReader in = new BufferedReader(new InputStreamReader(clientSocket.getInputStream()));
            PrintWriter out = new PrintWriter(clientSocket.getOutputStream(), true);

            // Read the number from the client
            String input = in.readLine();
            System.out.println("Received number from client: " + input);

            try {
                int number = Integer.parseInt(input);
                long factorial = calculateFactorial(number);
                out.println("The factorial of " + number + " is " + factorial);
            } catch (NumberFormatException e) {
                out.println("Invalid input. Please send an integer.");
            }

            // Close connection
            clientSocket.close();
            System.out.println("Client disconnected. Server shutting down.");
        } catch (IOException e) {
            System.err.println("Server exception: " + e.getMessage());
            e.printStackTrace();
        }
    }

    // Method to calculate factorial
    private static long calculateFactorial(int number) {
        long result = 1;
        for (int i = 2; i <= number; i++) {
            result *= i;
        }
        return result;
    }
}

