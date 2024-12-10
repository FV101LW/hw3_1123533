// Homework 3 - Question 1
// Wei-li Lin
// 1123533
// 12-11-2024

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//Create Adjacency List
vector<vector<int>> adjacencyList(int V, int E, vector<pair<int, int>>& edges) {
    vector<vector<int>> adList(V);

    for (const auto& edge : edges) {
        int u = edge.first;
        int v = edge.second;
        adList[u].push_back(v);
        adList[v].push_back(u);
    }

    for (int i = 0; i < V; ++i) {
        sort(adList[i].begin(), adList[i].end());
    }
    return adList;
}

void printList(const vector<vector<int>>& adList) {
    for (int i = 0; i < adList.size(); i++) {
        cout << i << ": ";
        for (int j = 0; j < adList[i].size(); ++j) {
            cout << adList[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int V, E;
    cout << "Enter Number of Vertices: ";
    cin >> V;
    cout << "Enter Number of Edges: ";
    cin >> E;
  // To initialize vector and store edges as integer pairs
    vector<pair<int, int>> edges;

    cout << "Enter the Edges in pairs (u v): " << endl;

    for (int i = 0; i < E; ++i) {
        int u, v;
        cin >> u >> v;
        if (u < 0 || v < 0 || u >= V || v >= V) {
            cout << "Invalid Range. Vertices must be within range [0, " << V - 1 << "]" << endl;
            return 1;
        }
        edges.push_back({ u, v });
    }

    //Make adjacency list
    vector<vector<int>> adList = adjacencyList(V, E, edges);

    cout << "\nAdjacency List: " << endl;
    //And this will print said list
    printList(adList);

    return 0;
}
