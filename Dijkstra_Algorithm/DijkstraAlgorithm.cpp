#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

#define INF INT_MAX

// Define a structure to represent a graph edge
struct Edge {
    int destination;
    int weight;
};

// Define a structure to represent a graph node
struct Node {
    int id;
    vector<Edge> neighbors;
};

// Dijkstra's algorithm function
vector<int> dijkstra(vector<Node>& graph, int start) {
    vector<int> distances(graph.size(), INF);
    distances[start] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, start});

    while (!pq.empty()) {
        int dist = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if (dist > distances[u]) {
            continue;
        }

        for (Edge& edge : graph[u].neighbors) {
            int v = edge.destination;
            int weight = edge.weight;

            if (dist + weight < distances[v]) {
                distances[v] = dist + weight;
                pq.push({distances[v], v});
            }
        }
    }

    return distances;
}

int main() {
    // Example graph
    vector<Node> graph(5); // Assuming 5 nodes
    graph[0].neighbors = {{1, 4}, {2, 1}};
    graph[1].neighbors = {{2, 2}, {3, 5}};
    graph[2].neighbors = {{3, 2}, {4, 3}};
    graph[3].neighbors = {{4, 1}};
    // Add edges and weights for other nodes as needed

    // Run Dijkstra's algorithm from node 0
    vector<int> shortest_distances = dijkstra(graph, 0);

    // Output shortest distances from node 0 to all other nodes
    for (int i = 0; i < shortest_distances.size(); ++i) {
        cout << "Shortest distance from node 0 to node " << i << ": ";
        if (shortest_distances[i] == INF) {
            cout << "INF" << endl;
        } else {
            cout << shortest_distances[i] << endl;
        }
    }

    return 0;
}
