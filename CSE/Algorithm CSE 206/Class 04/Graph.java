package Class_04;

// Dfs implementations
import java.util.LinkedList;
import java.util.Scanner;
import java.util.Stack;

public class Graph {

    private int V;
    private LinkedList<Integer> adj[];


    Graph(int v) {
        V = v;
        adj = new LinkedList[v];
        for (int i = 0; i < v; i++) {
            adj[i] = new LinkedList<>();

        }

    }

    void AddEdge(int v, int w) {
        adj[v].add(w);
    }

    void DFSO(int n) {
        boolean[] visited = new boolean[V];
        Stack<Integer> stacks = new Stack<>();
        stacks.push(n);
        visited[n] = true;

        while (!stacks.isEmpty()) {

            int x = stacks.pop();
            System.out.print(x + " ");
            
            for (int i : adj[x]) {
                if (!visited[i]) {
                    visited[i] = true;
                    stacks.push(i);
                }

            }
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        Graph graph = new Graph(4);

        graph.AddEdge(0, 1);
        graph.AddEdge(0, 2);
        graph.AddEdge(1, 2);
        graph.AddEdge(2, 0);
        graph.AddEdge(2, 3);
        graph.AddEdge(3, 3);

        graph.DFSO(2);

    }
}
