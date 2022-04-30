#include "Heap.h"
#include <iostream>
using namespace std;

Heap::Heap(){

}
int Heap::parentOf(int i){
    int parent = (i-1)/2;
    return parent;
}
int Heap::leftOf(int i){
    int left = i*2 +1;
    return left;
}
int Heap::rightOf(int i){
    int right = i*2 + 2;
    return right;
}
void Heap::print(){
    cout<<"[ "<<endl;
    for (int i=0;i<elements.size();i++){
        cout<<elements[i]<<" ";
    }
    cout<<"]";
}
void Heap::insertElement(int n){
    int x;
    for(int i=0;i<n;i++){
        cout<<"E: ";
        cin>>x;
        elements.push_back(x);
    }
    for (int i = n / 2 - 1; i >= 0; i--)
        reArraneg(i);
}
int Heap::getMax(int l,int r){
    if (elements[l]>elements[r])
        return l;
    return r;
}
void Heap::swapElements(int l,int r){
    int temp = elements[l];
    elements[l] = elements[r];
    elements[r] = temp;
}
void Heap::reArraneg(int i){
	int n = elements.size();
    int parent = i;
    int left = leftOf(i);
    int right = rightOf(i);
    if(left<n && right<n){
        int maxE = getMax(left,right);
        if(elements[maxE] > elements[parent]){
            swapElements(parent,maxE);
            reArraneg(maxE);
        }
    }
}

