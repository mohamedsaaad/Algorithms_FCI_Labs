#include "Heap.h"
#include "iostream"

using namespace std;
Heap::Heap()
{

}
void Heap::print(){
    cout<<endl;
    for (int i:elements){
        cout<<i<<" ,";
    }
    cout<<endl;
}
void Heap::insertElement(int x){
    print();
    elements.push_back(x);
    print();
    reArrange();
    print();
}
int Heap::parent(int x){
    return (x -1)/2;
}
int Heap::left(int x){
    return (2*x +1);
}
int Heap::right(int x){
    return (2*x +2);
}
void Heap::reArrange(){
    int iCurrent = elements.size() -1;
    int iParentIndex = parent(iCurrent);
    while (elements[iCurrent] > elements[iParentIndex]){
        int temp =elements[iCurrent];
        elements[iCurrent]=elements[iParentIndex];
        elements[iParentIndex]=temp;

        iCurrent = iParentIndex;
        iParentIndex = parent(iCurrent);
        if (iParentIndex == iCurrent){
            break;
        }
    }
}
void Heap::extractMax(){
    int iMax = elements[0];
    int iLast = elements.size()-1;
    elements[0]=elements[iLast];
    elements.pop_back();
    upReArrange();
    print();
}
void Heap::upReArrange(){
    int iCurrent = 0;
    int iLeft = left(iCurrent);
    int iRight = right(iCurrent);
    int iLargest;
    while (true){
        elements[iLeft]>elements[iRight]?iLargest=iLeft:iLargest=iRight;
        if(elements[iCurrent]>elements[iLargest] || iLargest >(elements.size()-2)){
            break;
        }
        int temp = elements[iLargest];
        elements[iLargest]=elements[iCurrent];
        elements[iCurrent]=temp;
        iCurrent = iLargest;
        iLeft = left(iCurrent);
        iRight = right(iCurrent);
    }
    cout<<"\nRe Arrange is Done \n";
}
