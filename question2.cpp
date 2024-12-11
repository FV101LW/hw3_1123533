// Homework 3 - Question 2
// Wei-li Lin
// 1123533
// 12-11-2024

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> traversal (const vector<vector<int>>& adj) {
  // Initialize vector for storage of BFS traversal
  vector<int> result;

  // Keeps track of nodes already visited
  vector<bool> visited(adj.size(), false);

  // Queue for nodes in BFS order
  queue<int> q;

  // BFS start from vertex 0
  q.push(0);
  visited[0] = true;

  while (!q.empty()) {
    int node = q.front();
    q.pop();
    result.push_back(node);

    // nb = neighbor
    // Traverse adjacents nodes of current node
    for (int nb : adj[node]) {
      if (!visited[nb]) {
        visited[nb] = true;
        q.push(nb);
      }
    }
  }
  return result;
}

int main() {
  vector<vector<int>> adj = {{2, 3, 1}, {0}, {0,4}, {0}, {2}};

  //Conducts BFS Traversal || resBFS = result of BFS
  vector<int> resBFS = traversal(adj);

  //Output
  cout << "BFS Traversal: ";
  for (int node: resBFS) {
    cout << node << " ";
  }
  cout << endl;
  return 0;
}
