package org.cn.get_postt;

import java.io.*;
import java.net.HttpURLConnection;
import java.net.URL;

public class Get {
    public static void main(String[] args) throws IOException {
        // Opening the connection to a URL webpage for GET request
        URL myUrl = new URL("https://jsonplaceholder.typicode.com/posts/1"); // Example API
        HttpURLConnection conn = (HttpURLConnection) myUrl.openConnection();

        // Setting the method to GET
        conn.setRequestMethod("GET");

        // Getting the response code to verify the request success
        int responseCode = conn.getResponseCode();
        System.out.println("Response Code: " + responseCode);

        if (responseCode == HttpURLConnection.HTTP_OK) { // HTTP 200 indicates success
            // Reading the response content using InputStreamReader and BufferedReader
            InputStreamReader in = new InputStreamReader(conn.getInputStream());
            BufferedReader buffer = new BufferedReader(in);
            StringBuffer fromServer = new StringBuffer();

            // Reading line by line and appending to the StringBuffer
            String eachLine = null;
            while ((eachLine = buffer.readLine()) != null) {
                fromServer.append(eachLine);
                fromServer.append(System.lineSeparator());
            }

            // Closing the buffer after reading
            buffer.close();

            // Printing the response from the server
            System.out.println("Response from server:\n" + fromServer);
        } else {
            System.out.println("GET request failed!");
        }
    }
}
