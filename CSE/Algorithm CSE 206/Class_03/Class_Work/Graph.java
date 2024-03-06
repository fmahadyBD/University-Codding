package Class_03;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Graph {

    static void addEdge(LinkedList<LinkedList<Integer>> adj, int u, int v) {
        adj.get(u).add(v);
        adj.get(v).add(u);
    }

    static void bfs(LinkedList<LinkedList<Integer>> adj, int source) {
        int size = adj.size();
        boolean[] visited = new boolean[size];
        Queue<Integer> q = new LinkedList<>();
        visited[source] = true;
        q.offer(source);
        while (!q.isEmpty()) {
            int cur = q.poll();
            System.out.print(cur + " ");

            LinkedList<Integer> neighbors = adj.get(cur);
            for (int n : neighbors) {
                if (!visited[n]) {
                    visited[n] = true;
                    q.offer(n);
                }
            }
        }
    }

    static boolean isCyclicUtil(LinkedList<LinkedList<Integer>> adj, int v, boolean[] visited, int parent) {
        visited[v] = true;
        for (int i : adj.get(v)) {
            if (!visited[i]) {
                if (isCyclicUtil(adj, i, visited, v))
                    return true;
            } else if (i != parent)
                return true;
        }
        return false;
    }

    static boolean isCyclic(LinkedList<LinkedList<Integer>> adj) {
        int V = adj.size();
        boolean[] visited = new boolean[V];
        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                if (isCyclicUtil(adj, i, visited, -1))
                    return true;
            }
        }
        return false;
    }

    public static void main(String[] args) {
        int v;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of vertices:");
        v = sc.nextInt();
        LinkedList<LinkedList<Integer>> adj = new LinkedList<>();
        for (int i = 0; i < v; i++) {
            adj.add(new LinkedList<>());
        }
        int x, y, e;
        System.out.println("Enter the total number of edges:");
        e = sc.nextInt();
        for (int i = 0; i < e; ++i) {
            x = sc.nextInt();
            y = sc.nextInt();
            addEdge(adj, x, y);
        }
        int source = sc.nextInt();
        System.out.println("BFS traversal:");
        bfs(adj, source);

        if (isCyclic(adj))
            System.out.println("\nThe graph contains a cycle.");
        else
            System.out.println("\nThe graph doesn't contain a cycle.");
    }
}

        int so = sc.nextInt();
        bfs(adj, so);

    }

}
