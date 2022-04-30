#include <iostream>
#include "DisjointSet.h"

using namespace std;
DisjointSet::DisjointSet(int s){
    setSize = s;
    parent = new int[setSize];
    numOfNodes = new int[setSize];
    for(int i=0;i<setSize;i++){
        parent[i] = i;
        numOfNodes[i] = 1;
    }
}
void DisjointSet::resetParent(int p,int n){
    for(int i=0;i<setSize;i++){
        if(parent[i]==p)
            parent[i] = n;
    }
}
void DisjointSet::doUnion(int x,int y){

    int xParent = parent[x];
    int yParent = parent[y];

    if(xParent==yParent){
        cout<<"Union Exists!!\n";
    }

    int xNodes = numOfNodes[x];
    int yNodes = numOfNodes[y];

    if(xNodes<= yNodes){
        parent[x]= yParent;
        numOfNodes[yParent]+=xNodes;
        numOfNodes[xParent] = 1;
        resetParent(xParent,yParent);
    }else{
        parent[y]= xParent;
        numOfNodes[xParent]+=yNodes;
        numOfNodes[yParent] = 1;
        resetParent(yParent,xParent);
    }

}
