#include <iostream>
#include "DisJointSet.h"

using namespace std;
DisJointSet::DisJointSet(int s){
    setSize=s;
    parent = new int [setSize];
    numOfNodes = new int [setSize];
    for ( int i=0;i<setSize;i++){
        parent[i]=i;
        numOfNodes[i]=1;
    }
}

int DisJointSet::findParent(int x){
    if ( x>=setSize){
        cout<<"You've entered numbers out of bound\n";
        return -1;
    }
    return parent[x];
}
void DisJointSet::resetParent(int p,int n){
    int nodeParent;
    for (int i=0;i<setSize;i++){
        nodeParent = findParent(i);
        if (nodeParent==p){
            parent[i]=n;
        }
    }
}
bool DisJointSet::doUnion(int x,int y){

    if ( x>=setSize || y>=setSize ){
        cout<<" You've entered numbers out of bound\n";
        return false;
    }

    int xParent = findParent(x);
    int yParent = findParent(y);

    if(xParent==yParent){
        cout<<" Union Already exists\n";
        return false;
    }

    int xNodes = numOfNodes[xParent];
    int yNodes = numOfNodes[yParent];

    if(xNodes<=yNodes){
        parent[x]=yParent;
        numOfNodes[yParent]+=xNodes;
        numOfNodes[xParent]=1;
        resetParent(xParent,yParent);
        return true;
    }

    parent[y]=xParent;
    numOfNodes[xParent]+=yNodes;
    numOfNodes[yParent]=1;
    resetParent(yParent,xParent);
    return true;
}

void DisJointSet::print(){
    cout<<" Parent: { ";
    for ( int i=0;i<setSize;i++){
        cout<<parent[i]<<" ";
    }
    cout<<"}\n Nodes:  { ";
    for ( int i=0;i<setSize;i++){
        cout<<numOfNodes[i]<<" ";
    }
    cout<<"}\n\n";
}
