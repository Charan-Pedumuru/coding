#include <iostream>
#include <vector>
using namespace std;

class Graph {
public:
    vector<vector<int>> adjList;

    Graph(int vertices) {
        adjList.resize(vertices);
    }

    void addEdge(int u, int v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    void printGraph() {
        for (int i = 0; i < adjList.size(); i++) {
            cout << i << " -> ";
            for (int v : adjList[i]) {
                cout << v << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Graph g(3);
    g.addEdge(0, 1);
    g.addEdge(1, 2);

    g.printGraph();
    return 0;
}
