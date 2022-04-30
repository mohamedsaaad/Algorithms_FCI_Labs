#include <iostream>
#include "Graph.h"

using namespace std;

Graph::Graph(int x){
    iSize = x;
    adjList.resize(iSize);
}
void Graph::addEdge(int i, int j){
    if( i<iSize&& j<iSize){
        adjList[i].push_back(j);
        adjList[j].push_back(i);
    }else{
        cout<<" You've entered numbers out of bound\n";
    }
}
void Graph::setMatrix( int **iMatrix){
    *iMatrix = new int[iSize];
    for ( int j=0;j<iSize;j++){
        iMatrix[j]= new int [iSize];
    }
    for ( int i=0;i<iSize;i++){
        for ( int j=0;j<iSize;j++){
            iMatrix[i][j]=0;
        }
    }
    for(int k = 0;k<iSize;k++){
        for(int m = 0;m<adjList[k].size();m++){
            int iValue = adjList[k][m];
            iMatrix[k][iValue]= 1 ;
        }
    }
}
void Graph::printMatrix(){
    int **iMatrix;
    setMatrix(iMatrix);
    cout<<endl;
    for ( int i=0;i<iSize;i++){
        for ( int j=0;j<iSize;j++){
            cout<<" "<<iMatrix[i][j];
        }
        cout<<endl;
    }
}
