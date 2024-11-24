package org.example;

import java.io.*;
import java.net.*;

class ClientHandler extends Thread {
    final Socket com_tunnel;
    final DataInputStream dis_tunnel;
    final DataOutputStream dos_tunnel;
    final int clientId;

    public ClientHandler(Socket socket, DataInputStream dis, DataOutputStream dos, int clientId) {
        this.com_tunnel = socket;
        this.dis_tunnel = dis;
        this.dos_tunnel = dos;
        this.clientId = clientId;
    }

    @Override
    public void run() {
        String received;
        try {
            while (true) {
                dos_tunnel.writeUTF("Enter two integers and an operator (Sum, Subtract, Multiply, Divide, Modulus) or type 'ENDS' to exit:");

                received = dis_tunnel.readUTF();

                if (received.equalsIgnoreCase("ENDS")) {
                    System.out.println("Client " + clientId + " has disconnected.");
                    this.com_tunnel.close();
                    break;
                }

                String[] inputs = received.split(" ");
                if (inputs.length != 3) {
                    dos_tunnel.writeUTF("Invalid input format. Provide input as: <int> <int> <operator>");
                    continue;
                }

                try {
                    int num1 = Integer.parseInt(inputs[0]);
                    int num2 = Integer.parseInt(inputs[1]);
                    String operator = inputs[2];
                    int result = 0;

                    switch (operator.toLowerCase()) {
                        case "sum":
                            result = num1 + num2;
                            break;
                        case "subtract":
                            result = num1 - num2;
                            break;
                        case "multiply":
                            result = num1 * num2;
                            break;
                        case "divide":
                            if (num2 == 0) {
                                dos_tunnel.writeUTF("Error: Division by zero is not allowed.");
                                continue;
                            }
                            result = num1 / num2;
                            break;
                        case "modulus":
                            result = num1 % num2;
                            break;
                        default:
                            dos_tunnel.writeUTF("Invalid operator. Use: Sum, Subtract, Multiply, Divide, Modulus");
                            continue;
                    }

                    dos_tunnel.writeUTF("Result: " + result);

                } catch (NumberFormatException e) {
                    dos_tunnel.writeUTF("Error: Invalid integers. Please enter valid numbers.");
                }
            }

            dis_tunnel.close();
            dos_tunnel.close();

        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}

