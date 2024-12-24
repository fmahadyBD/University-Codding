package org.cn.get_postt;

import java.io.*;
import java.net.HttpURLConnection;
import java.net.MalformedURLException;
import java.net.URL;

public class post
    public static void main(String[] args) throws MalformedURLException, IOException {

        // Opening the connection to a URL webpage where we can post
        URL myUrl = new URL("https://jsonplaceholder.typicode.com/posts/");
        HttpURLConnection conn = (HttpURLConnection) myUrl.openConnection();

        // Setting the method for this connection
        conn.setRequestMethod("POST");

        // Now posting anything on the given URL webpage
        conn.setDoOutput(true);
        // This is to ensure we can post data using this connection

        OutputStream out = conn.getOutputStream();
        // Preparing the content to post
        String postedString = "Hi!!! We have posted something!!! Yay!!!";
        out.write(postedString.getBytes());
        // Writing the bytes of the string to the connection output stream

        // Testing if the posting is successful
        int responseCode = conn.getResponseCode();
        System.out.print("Value of HTTP_CREATED is: " + conn.HTTP_CREATED + "\n");
        if (responseCode == conn.HTTP_CREATED) {
            System.out.print("This is the response Code: " + responseCode + "\n");
            System.out.print("This is the response Message from server: " + conn.getResponseMessage() + "\n");
        } else {
            System.out.print("GO HOME EVERYBODY :(");
        }

        // Reading the posted content using InputStream
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

        // Printing the content received from the server
        System.out.print("Here is our posted content:\n" + fromServer);
    }
}
