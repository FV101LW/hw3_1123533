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
