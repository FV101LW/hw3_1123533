#include <iostream>
#include <vector>
using namespace std;

//Create Adjacency List
vector<vector<int>> adjacencyList (int V, const vector<pair<int, int>>& edges) {
  vector<vector<int>> adList(V);

  for(const auto& edge: edges) {
    int u = edge.first;
    int v = edge.second;
    adList[u].push_back(v);
    adList[v].push_back(u);
  }
  return adList;
}

void printList(const vector<vector<int>>& adList) {
  for (int i = 0; i < adList.size(); i++) {
    cout << i << ": ";
    for (int neighbor : adList[i]) {
      cout << neighbor << " ";
    }
    cout << endl;
  }
}

int main() {
  int v = 5;
  vector<pair<int, int>> edges = {{0,1}, {0,4}, {1,2}, {1,3}, {3,4}};

  vector<vector<int>> adList = adjacencyList (V, edges);
}
