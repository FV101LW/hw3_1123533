// Homework 3 - Question 2
// Wei-li Lin
// 1123533
// 12-11-2024

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> traversal (const vector<vector<int>>& adj) {
  vector<int> result;

  vector<bool> visited(adj.size(), false);

  queue<int> q;

  q.push(0);
  visited[0] = true;

  while (!q.empty()) {
    int node = q.front();
    q.pop();
    result.push_back(node);

    //nb = neighbor
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

  vector<int> resBFS = traversal(adj);

  cout << "BFS Traversal: ";
  for (int node: resBFS) {
    cout << node << " ";
  }
  cout << endl;
  return 0;
}
