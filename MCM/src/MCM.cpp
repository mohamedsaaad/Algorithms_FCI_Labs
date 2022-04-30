#include <iostream>
#include "MCM.h"

using namespace std;


MCM::MCM(){
    numOfE = 4;
    m = new int*[numOfE+1];
    p = new int[numOfE+1];
    p[0] = 40;
    p[1] = 20;
    p[2] = 30;
    p[3] = 10;
    p[4] = 30;
    for(int i=0;i<numOfE+1;i++){
        m[i] = new int[numOfE+1];
    }
    for(int i=0;i<numOfE+1;i++){
       for(int j=0;j<numOfE+1;j++){
            m[i][j]=-1;
        }
    }
}
int MCM::getOptimal(int i,int j){
    int k, r = 0xfffff;
    if(i==j-1){
        return 0;
    }
    if(m[i][j]>=0) return m[i][j];
    for(int k=i+1 ;k<j;k++){
        int v = getOptimal(i,k) + getOptimal(k,j) + p[i]*p[k]*p[j];
        if(v<r){
            r=v;
            d[i][j] = k;
        }
    }
    m[i][j]=r;
    return r;
}
void MCM::outSol(int i,int j){
    if(j==i+1){
        cout<<"(A"<<i<<")";
        int k = d[i][j];

    }
}

