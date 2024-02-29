package Class_03;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;
import java.util.Scanner;

public class Graph {

    static void addl(LinkedList<LinkedList<Integer>> a, int u, int v) {
        a.get(u).add(v);
        a.get(v).add(u);
    }

    static void bfs(LinkedList<LinkedList<Integer>> a, int source) {
        int size = a.size();
        boolean[] visited = new boolean[size];
        Queue<Integer> q = new LinkedList<Integer>();
        visited[source] = true;
        q.offer(source);
        while (!q.isEmpty()) {
            int cur = q.poll();
            System.out.println(cur + " ");

            LinkedList<Integer> nigrs = a.get(cur);
            for (int n : nigrs) {
                if (!visited[n]) {
                    visited[n] = true;
                    q.offer(n);
                }
            }

        }

    }

    public static void main(String[] args) {
        int v;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the vertex Number:");
        v = sc.nextInt();
        LinkedList<LinkedList<Integer>> adj = new LinkedList<LinkedList<Integer>>();
        for (int i = 0; i < v; i++) {
            adj.add(new LinkedList<Integer>());

        }
        int x, y, e;
        System.out.println("Enter the Total Edges");
        e = sc.nextInt();
        for (int i = 0; i < e; ++i) {
            x = sc.nextInt();
            y = sc.nextInt();
            addl(adj, x, y);
        }
        int so = sc.nextInt();
        bfs(adj, so);

    }

}
