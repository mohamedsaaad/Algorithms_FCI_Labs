#ifndef GRAPH_H
#define GRAPH_H
#include <vector>

using namespace std;

class Graph
{
    public:
        Graph(int);
        void addEdge(int ,int);
        void printMatrix();
        void setMatrix(int **);
    private:
        vector<vector<int>> adjList;
        int iSize;
};

#endif // GRAPH_H
