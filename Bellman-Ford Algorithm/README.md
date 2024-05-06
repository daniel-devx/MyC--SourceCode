# Bellman-Ford Algorithm Implementation in C++

## Introduction

This code provides an implementation of the Bellman-Ford algorithm in C++. The Bellman-Ford algorithm is used to find the shortest paths from a single source vertex to all other vertices in a weighted directed graph. Unlike Dijkstra's algorithm, it can handle graphs with negative edge weights and detect negative cycles.

## Implementation Details

The code is implemented in C++ and demonstrates how to find the shortest paths using the Bellman-Ford algorithm.

## Code Explanation

1. **Header Files**: The code includes necessary header files such as `<iostream>` and `<vector>`.

2. **Struct: Edge**:

   - This structure represents an edge in the graph and contains three fields: `source`, `destination`, and `weight`.

3. **Function: bellmanFord**:

   - This function takes a vector of edges representing the graph, the number of vertices, and the source vertex as input parameters.
   - It initializes distances to all vertices as infinity, except the distance from the source vertex, which is set to 0.
   - It relaxes each edge in the graph for (numVertices - 1) iterations, updating distances if a shorter path is found.
   - After relaxation, it checks for negative cycles in the graph.
   - Finally, it prints the shortest distances from the source vertex to all other vertices.

4. **Main Function**:
   - Initializes the graph as a vector of edges and specifies the number of vertices and edges.
   - Specifies the source vertex.
   - Calls the `bellmanFord` function with the graph and source vertex.

## Example Output

Shortest distances from source vertex 0:
Vertex 0: 0
Vertex 1: -1
Vertex 2: 2
Vertex 3: -2
Vertex 4: 1

## Conclusion

This code demonstrates how to use the Bellman-Ford algorithm to find the shortest paths in a weighted directed graph. It provides a clear example of how to implement and utilize this algorithm in solving graph-related problems, especially when dealing with negative edge weights or detecting negative cycles.
