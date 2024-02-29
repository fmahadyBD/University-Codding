package mahadyHasanFahim.ClassWork;

/**
 *
 * @author Mahady Hasan Fahim
 */
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class BFS {

    private int V;
    private LinkedList<Integer> adj[];
    private Queue<Integer> queue;
    private ArrayList<Integer> levels; 

    BFS(int v) {
        V = v;
        adj = new LinkedList[V];
        for (int i = 0; i < v; i++) {
            adj[i] = new LinkedList<>();
        }
        queue = new LinkedList<>();
        levels = new ArrayList<>(V);
        for (int i = 0; i < V; i++) {
            levels.add(-1); 
        }
    }

    void AddEdge(int v, int w) {
        adj[v].add(w);
    }

    void BFS(int n) {
        boolean[] visited = new boolean[V];
        queue.add(n);
        visited[n] = true;
        levels.set(n, 0); 

        while (!queue.isEmpty()) {
            n = queue.poll();
            System.out.print(n + " ");

            for (int i : adj[n]) {
                if (!visited[i]) {
                    visited[i] = true;
                    levels.set(i, levels.get(n) + 1);
                    queue.add(i);
                }
            }
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Vertex Number:");
        int vx = sc.nextInt();
        BFS graph = new BFS(vx);
        System.out.println("Enter total number of edges:");
        int e = sc.nextInt();
        while (e-- > 0) {
            System.out.println("Enter two connected Vertices:");

            int u = sc.nextInt();
            int v = sc.nextInt();
            graph.AddEdge(u, v);
            graph.AddEdge(v, u);
        }

        System.out.println("Breadth First Search for the graph is:");
        graph.BFS(0);

        System.out.println("\nThe levels of vertices:");
        for (int i = 0; i < vx; i++) {
            System.out.println("Vertex " + i + ": " + graph.levels.get(i));
        }
    }
}
/*
Input: 
Vertex: 8
Edege: 7
connected vertex:
0 1
1 2
2 3
2 4
0 5
5 6
6 7
Output: 
Breadth First Search for the graph is:
0 1 5 2 6 3 4 7 
The levels of vertices:
Vertex 0: 0
Vertex 1: 1
Vertex 2: 2
Vertex 3: 3
Vertex 4: 3
Vertex 5: 1
Vertex 6: 2
Vertex 7: 3
*/
