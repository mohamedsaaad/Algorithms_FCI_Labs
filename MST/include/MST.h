#ifndef MST_H
#define MST_H
#include "DisJointSet.h"
#include <vector>
#include "Edges.h"

using namespace std;
class MST
{
    public:
        MST(int);
        void addEdge(int ,int, int);

    private:
        DisJointSet *obj;
        int treeSize;
        vector<Edges> allPosEdges;
        vector<Edges> choosedEdges;
};

#endif // MST_H
