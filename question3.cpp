// Homework 3 - Question 3
// Wei-li Lin
// 1123533
// 12-11-2024
// Depth First Search Traversal

#include <iostream>
#include <vector>
using namespace std;

void DFS(int node, const vector<vector<int>>& adj, vector<bool>& visited, vector<int>& result) {
    visited[node] = true; // To mark current node as visited & add it to result
    result.push_back(node);

    // Visit all adjacent nodes
    for (int nb : adj[node]) {
        if (!visited[nb]) {
            DFS(nb, adj, visited, result);
        }
    }
}

vector<int> DFS(const vector<vector<int>>& adj) {
    vector<int> result;                       // Store DFS traversal
    vector<bool> visited(adj.size(), false); // To mark visited nodes

    // Commence DFS from vertex 0
    DFS(0, adj, visited, result);

    return result;
}

int main() {

    // Input example
    vector<vector<int>> adj = { {1,2}, {0,3}, {0,4}, {1}, {2,5}, {4} };

    vector<int> resDFS = DFS(adj);

    // Output of Depth-First Search
    cout << "DFS Traversal: [";
    for (int node : resDFS) {
        cout << node << " ";
    }
    cout << "]" << endl;

    return 0;
}
