package algorithm;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Scanner;
import java.util.Stack;

/**
 *
 * @author Mahady Hasan Fahim
 */
public class Graph {

    private int V;
    private ArrayList<Integer> adj[];

    Graph(int v) {
        V = v;
        adj = new ArrayList[V];
        for (int i = 0; i < v; i++) {
            adj[i] = new ArrayList<>();
        }
    }

    void addEdge(int v, int w) {
        adj[v].add(w);
    }

    boolean DFSUtil(int v, boolean[] visited, boolean[] recStack, int[] levels) {
        if (!visited[v]) {
            visited[v] = true;
            recStack[v] = true;

            for (int i : adj[v]) {
                if (!visited[i] && DFSUtil(i, visited, recStack, levels)) {
                    return true;
                } else if (recStack[i]) {
                    return true;
                }
            }
        }
        recStack[v] = false;
        return false;
    }

    boolean hasCycle() {
        boolean[] visited = new boolean[V];
        boolean[] recStack = new boolean[V];

        for (int i = 0; i < V; i++) {
            if (DFSUtil(i, visited, recStack, new int[V])) {
                return true;
            }
        }

        return false;
    }

    void DFS(int v, int[] levels) {
        boolean[] visited = new boolean[V];
        Stack<Integer> stack = new Stack<>();
        stack.push(v);
        levels[v] = 0;

        while (!stack.isEmpty()) {
            v = stack.pop();

            if (!visited[v]) {
                System.out.println("Node " + v + " is at level " + levels[v]);
                visited[v] = true;

                for (int i : adj[v]) {
                    if (!visited[i]) {
                        stack.push(i);
                        levels[i] = levels[v] + 1;
                    }
                }
            }
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Vertex Number:");
        int vx = sc.nextInt();
        Graph graph = new Graph(vx);
        System.out.println("Enter total number of edges:");
        int e = sc.nextInt();
        while (e-- > 0) {
            System.out.println("Enter two connected Vertices:");
            int u = sc.nextInt();
            int v = sc.nextInt();
            graph.addEdge(u, v);
            graph.addEdge(v, u);
        }

        int[] levels = new int[vx]; // To store the level of each node

        System.out.println("Depth First Search with node levels for the graph is:");
        graph.DFS(0, levels);

        if (graph.hasCycle()) {
            System.out.println("\nThe graph contains a cycle.");
        } else {
            System.out.println("\nThe graph does not contain a cycle.");
        }
    }
}
