#include <iostream>
#include "Graph.h"

using namespace std;

int main()
{
    Graph obj(4);
    obj.addEdge(0,2);
    obj.addEdge(1,3);
    obj.addEdge(2,1);
    obj.addEdge(3,2);

    obj.printMatrix();
    return 0;
}
