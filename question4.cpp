// Homework 3 - Question 4
// Wei-li Lin
// 1123533
// 12-11-2024

#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

struct Edge {
    int vertex;
    int weight;

    Edge(int v, int w) : vertex(v), weight(w) {}

    bool operator>(const Edge& e) const {
        return weight > e.weight;
    }
};

int MST(int V, vector<vector<pair<int, int>>>& adj) {
    vector<bool> inMST(V, false);
    priority_queue<Edge, vector<Edge>, greater<Edge>> priorityQ;
    int weightMST = 0; // stores Weight of MST

    priorityQ.push(Edge(0, 0));

    while (!priorityQ.empty()) {
        // Gets edge with the minimum weight
        Edge edge = priorityQ.top();
        priorityQ.pop();

        int u = edge.vertex;
        int weight = edge.weight;

        if (inMST[u]) {
            continue;
        }

        // Include this vertex in MST and + the weight
        inMST[u] = true;
        weightMST += weight;

        for (auto& nb : adj[u]) {
            int v = nb.first;
            int w = nb.second;

            //If nb is not in MST yet, add edge to priority queue
            if (!inMST[v]) {
                priorityQ.push(Edge(v, w));
            }
        }
    }
    return weightMST; // Returns MST total weight
}

//now to the main func
int main() {
    int V = 4, E = 5;
    vector<vector<pair<int, int>>> adj(V);

    // Read edges and build adjacency list
    adj[0].push_back({ 1,10 });
    adj[0].push_back({ 2,6 });
    adj[0].push_back({ 3,5 });
    adj[1].push_back({ 0,10 });
    adj[1].push_back({ 3,15 });
    adj[2].push_back({ 0,6 });
    adj[2].push_back({ 3,4 });
    adj[3].push_back({ 0,5 });
    adj[3].push_back({ 1,15 });
    adj[3].push_back({ 2,4 });

    // Find MST weight
    int result = MST(V, adj);

    // Output (is 19)
    cout << result << endl;

    return 0;
}
