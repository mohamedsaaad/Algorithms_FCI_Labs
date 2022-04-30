#include "KnapSack.h"
#include<iostream>

using namespace std;

KnapSack::KnapSack(int n,int maxW){
    num = n;
    maxWeight = maxW+1;
    t = new int *[num];
    d = new int *[num];
    for(int i=0;i<num;i++){
        t[i] = new int [maxWeight];
        d[i] = new int [maxWeight];
        for(int j =0;j<maxWeight;j++){
            t[i][j]=-1;
        }
    }
    v = new int[num];
    w = new int [num];

    v[0]=1;
    v[1]=4;
    v[2]=5;
    v[3]=7;

    w[0]=2;
    w[1]=3;
    w[2]=4;
    w[3]=5;

}
int KnapSack::getOptimal(int i, int maxW){
    cout<<"Here\n";
    if(i==0){

        if(w[0]<=maxW){
            d[0][maxW] = 1;
            return v[0];
        }
        d[0][maxW] = 0;
            return 0;
    }
    if(t[i][maxW]>=0){\
        return t[i][maxW];
    }
    int r = getOptimal(i-1,maxW);
    if(w[i]<=maxW){
        int value = v[i] + getOptimal(i-1,maxW-w[i]);
        if(r<value){
            d[i][maxW] = 1;
            r = value;
        }
        cout<<"Here3\n";
    }
    t[i][maxW] = r;
    return r;
}
void KnapSack::print(){
    for(int i=0;i<num;i++){
        for(int j =0;j<maxWeight;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}
