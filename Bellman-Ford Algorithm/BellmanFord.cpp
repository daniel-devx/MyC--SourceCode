#include <iostream>
#include <vector>

using namespace std;

// Structure to represent an edge
struct Edge {
    int source, destination, weight;
};

// Function to find the shortest paths from a source vertex to all other vertices using Bellman-Ford algorithm
void bellmanFord(vector<Edge>& edges, int numVertices, int source) {
    vector<int> distance(numVertices, INT_MAX); // Initialize distances to all vertices as infinity
    distance[source] = 0; // Set distance from source to itself as 0

    // Relax edges for (numVertices - 1) iterations
    for (int i = 1; i <= numVertices - 1; ++i) {
        for (const auto& edge : edges) {
            int u = edge.source;
            int v = edge.destination;
            int weight = edge.weight;
            if (distance[u] != INT_MAX && distance[u] + weight < distance[v]) {
                distance[v] = distance[u] + weight;
            }
        }
    }

    // Check for negative cycles
    for (const auto& edge : edges) {
        int u = edge.source;
        int v = edge.destination;
        int weight = edge.weight;
        if (distance[u] != INT_MAX && distance[u] + weight < distance[v]) {
            cout << "Graph contains negative cycle" << endl;
            return;
        }
    }

    // Print shortest distances
    cout << "Shortest distances from source vertex " << source << ":" << endl;
    for (int i = 0; i < numVertices; ++i) {
        cout << "Vertex " << i << ": " << distance[i] << endl;
    }
}

int main() {
    int numVertices = 5;
    int numEdges = 8;

    // Define the graph as a vector of edges
    vector<Edge> edges = {
        {0, 1, -1},
        {0, 2, 4},
        {1, 2, 3},
        {1, 3, 2},
        {1, 4, 2},
        {3, 2, 5},
        {3, 1, 1},
        {4, 3, -3}
    };

    int source = 0; // Source vertex

    // Run Bellman-Ford algorithm
    bellmanFord(edges, numVertices, source);

    return 0;
}
