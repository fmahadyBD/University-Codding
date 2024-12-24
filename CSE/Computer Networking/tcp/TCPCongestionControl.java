package org.cn.tcp;

import java.util.*;

public class TCPCongestionControl {

    // This code is designed for the Congestion Control mechanism of TCP Reno.
    // Change this code, if you want TCP Tahoe.
    // In Reno, when congestion is detected using Triple Dup Ack, cwnd value becomes half only.
    // In Tahoe, cwnd becomes 1 when congestion is detected both using Triple Dup Ack and Timeout.

    private int cwnd;         // Congestion Window
    private int ssthresh;     // Slow Start Threshold
    private int rtt;          // Round Trip Time
    private boolean congestion;

    public TCPCongestionControl(int init_ssthresh) {
        cwnd = 1;
        ssthresh = init_ssthresh;
        congestion = false;
        rtt = 0;
    }

    public void run() {
        System.out.println("Connected to the Server...");
        System.out.println("Enter the length of your data: ");
        Scanner scan = new Scanner(System.in);
        int len = scan.nextInt();
        int dataSeqNum = 0;
        System.out.println("Your data is starting to be sent...");

        while (dataSeqNum < len) {
            this.rtt++;
            System.out.println();
            System.out.println("Data sending in RTT number " + this.rtt);
            System.out.println("---------------------------------------");
            System.out.println("Previous cwnd size: " + cwnd);
            System.out.println("Updated ssthresh value: " + ssthresh);

            if (!congestion) {
                if (cwnd < ssthresh) {
                    // Slow Start Phase
                    // Exponential increase of cwnd
                    cwnd = cwnd * 2;
                    System.out.println("...SS phase running...");
                } else if (cwnd >= ssthresh) {
                    // Congestion Avoidance Phase
                    // Linear increase of cwnd
                    cwnd = cwnd + 1;
                    System.out.println("...CA phase running...");
                }
            }
            System.out.println("Updated cwnd size: " + cwnd);

            sendPacket(dataSeqNum);
            dataSeqNum += cwnd;
        }

        System.out.println("\nYour data sending is completed. No more data to send.");
        System.out.println("Congestion Control mechanism concludes.");
        System.out.println("It took " + this.rtt + " transmission rounds to send the whole data.");
    }

    public void sendPacket(int dataSeqNum) {
        System.out.println("Data from " + (dataSeqNum + 1) + " to " + (dataSeqNum + cwnd) + " is being sent now...\n");

        if (!receiveAcknowledgment()) {
            congestion = true;
            System.out.println("... but wait! Congestion has been detected!");
            if (timeout()) {
                handleTimeoutCongestion();
            } else {
                handle3DupAckCongestion();
            }
        } else {
            congestion = false;
        }
    }

    public boolean receiveAcknowledgment() {
        // Simulate random acknowledgment to generate congestion
        Random ack = new Random();
        return ack.nextBoolean();
    }

    public boolean timeout() {
        // Simulate random congestion detection using timeout or duplicate ACK
        Random rttRandom = new Random();
        return rttRandom.nextBoolean();
    }

    public void handleTimeoutCongestion() {
        System.out.println("\nTimeout occurred. Handling Timeout-based congestion: cwnd value will become 1.");
        ssthresh = cwnd / 2;
        if (ssthresh == 0) ssthresh = 1; // Ensure ssthresh is at least 1
        cwnd = 1;
        retransmitPacket();
    }

    public void handle3DupAckCongestion() {
        System.out.println("\nHandling Triple Dup Ack-based congestion: cwnd value will be halved.");
        ssthresh = cwnd / 2;
        if (ssthresh == 0) ssthresh = 1; // Ensure ssthresh is at least 1
        cwnd = ssthresh;
        retransmitPacket();
    }

    public void retransmitPacket() {
        System.out.println("\nRetransmitting the lost packet now after handling.\n");
        congestion = false;
    }

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        System.out.println("Please input the initial ssthresh value: ");
        int ssthresh = scn.nextInt();

        TCPCongestionControl reno = new TCPCongestionControl(ssthresh);
        reno.run();
    }
}
