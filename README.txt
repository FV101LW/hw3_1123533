# hw3_1123533
Homework 3 of Data Structures, by student no. 1123533.

Question 1: 
Given an undirected graph with V nodes and E edges, create and return an adjacency list of the graph. 0-based indexing is followed everywhere.

Input used:
(0,1) (0,2) (1,2) (1,3) (2,4) (3,4)

Output: {1,2}, {0,2,3}, {0,1,4}, {1,4}, {2,3}

Question 2:
Given a connected undirected graph represented by an adjacency list adj, which is a vector of vectors where each adj[i] represents the list of vertices connected to vertex i. Perform a Breadth First Traversal (BFS) starting from vertex 0, visiting vertices from left to right according to the adjacency list, and return a list containing the BFS traversal of the graph.
Note: Do traverse in the same order as they are in the adjacency list.

Input used:
{1,3}, {0,2}, {1,3}, {0,2}

Output: 0 1 3 2

Question 3:
Given a connected undirected graph represented by an adjacency list adj, which is a vector of vectors where each adj[i] represents the list of vertices connected to vertex i. Perform a Depth First Traversal (DFS) starting from vertex 0, visiting vertices from left to right as per the adjacency list, and return a list containing the DFS traversal of the graph.
Note: Do traverse in the same order as they are in the adjacency list.

Input used:
adj = {{1,2}, {0,3}, {0,4}, {1}, {2,5}, {4}}

Output: [0, 1, 2, 3, 4, 5]

Question 4:
Given a weighted, undirected, and connected graph with V vertices and E edges, your task is to find the sum of the weights of the edges in the Minimum Spanning Tree (MST) of the graph. The graph is represented by an adjacency list, where each element adj[i] is a vector containing vector of integers. Each vector represents an edge, with the first integer denoting the endpoint of the edge and the second integer denoting the weight of the edge.

Input used:
V = 4, E = 5
{ 1,10 }
{ 2,6 }
{ 3,5 }
{ 0,10 }
{ 3,15 }
{ 0,6 }
{ 3,4 }
{ 0,5 }
{ 1,15 }
{ 2,4 }

Output: 19
