#include <iostream>
#include "Heap.h"

using namespace std;

int main()
{
    Heap obj;
    obj.insertElement(1);
    obj.insertElement(10);
    obj.insertElement(2);
    obj.insertElement(3);
    obj.insertElement(8);
    obj.insertElement(4);
    obj.extractMax();
    return 0;
}
