#include <iostream>
#include "Heap.h"
#include "DisjointSet.h"
#include "KnapSack.h"

using namespace std;

int main()
{
    /*Heap obj;
    obj.insertElement(6);
    obj.print();*/

    KnapSack obj2(4,7);
    obj2.print();
    cout<<"Optimal is: "<<obj2.getOptimal(3,7)<<endl;
    obj2.print();
    return 0;
}
