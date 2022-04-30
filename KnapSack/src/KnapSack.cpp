#include "KnapSack.h"
#include "Data.h"
#include <iostream>
using namespace std;

KnapSack::KnapSack(int n,int x){
    maxWeight = x;
    numElement = n;
    Data obj1(7,20),obj2(8,100),obj3(3,30);
    elements.push_back(obj1);
    elements.push_back(obj2);
    elements.push_back(obj3);
}
int max(int a, int b) {
    return (a > b)? a : b;
}
int KnapSack::getOptimal(){
    cout<<"Value: "<<saad(numElement,maxWeight)<<endl;
}
int KnapSack::saad(int n,int w){
    if( w<=0 || n==0){
        return 0;
    }
    if(elements[n-1].weight> w){
      return saad(n-1,w);
    }else{
        return max(elements[n-1].value + saad(n-1, w-elements[n-1].weight) , saad(n-1, w));
    }
}
