#include "MST.h"
#include "DisJointSet.h"
#include <iostream>
#include "Edges.h"

using namespace std;
MST::MST(int num){
    treeSize=num;
    obj = new DisJointSet(treeSize);
}
void MST::addEdge(int f,int t,int w){
    addEdge(0,1,4);
    addEdge(0,3,5);
    addEdge(1,4,1);
    addEdge(1,2,2);
    addEdge(0,2,6);
    addEdge(3,2,7);
    addEdge(2,4,3);
}
