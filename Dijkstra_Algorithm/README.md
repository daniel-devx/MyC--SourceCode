# Dijkstra's Algorithm

Dijkstra's algorithm is a graph search algorithm used to find the shortest path between a single source node and all other nodes in a weighted graph with non-negative edge weights.

The algorithm operates by iteratively exploring nodes in the graph, updating the shortest distance from the source node to each node as it progresses.

## Overview of Dijkstra's Algorithm

### Initialization:

1. Initialize an array or data structure to store the shortest distances from the source node to each node in the graph. Initially, set the distance to the source node to 0 and the distance to all other nodes to infinity (or a very large value).
2. Initialize a priority queue (min heap) to store nodes ordered by their tentative distances from the source node. The priority queue will prioritize nodes with the shortest tentative distances.

### Main Loop:

- While there are still nodes to be explored and the priority queue is not empty:
  - Extract the node u with the shortest tentative distance from the priority queue.
  - For each neighbor v of node u:
    1. Calculate the tentative distance from the source node to node v through node u. This distance is the sum of the distance to node u and the weight of the edge from u to v.
    2. If the tentative distance is shorter than the current distance stored for node v, update the distance for node v to the tentative distance.
    3. If the distance was updated, add node v to the priority queue with its new tentative distance.

### Termination:

After the main loop completes, all shortest distances from the source node to all other nodes have been calculated.

### Output:

The final array or data structure containing the shortest distances from the source node to all other nodes can be used to determine the shortest path from the source node to any destination node in the graph.

## Key Idea

The key idea behind Dijkstra's algorithm is the greedy strategy of always selecting the node with the shortest tentative distance from the source node at each iteration. By iteratively updating the shortest distances to each node, Dijkstra's algorithm efficiently finds the shortest path from the source node to all other nodes in the graph.

## Applications

Dijkstra's algorithm can be used by robots and autonomous vehicles to plan their movements in an environment with obstacles and constraints. It helps them navigate efficiently while avoiding obstacles and reaching their destinations safely.
