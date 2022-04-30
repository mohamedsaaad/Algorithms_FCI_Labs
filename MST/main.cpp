#include <iostream>
#include "DisJointSet.h"

using namespace std;

int main(){

    DisJointSet obj(5);
    obj.doUnion(0,2);
    obj.print();
    obj.doUnion(1,0);
    obj.print();
    obj.doUnion(1,2);
    obj.doUnion(1,6);
    obj.doUnion(3,4);
    obj.print();
    obj.doUnion(4,2);
    obj.print();

//    DisJointSet obj(6);
//    obj.doUnion(1,5);
//    obj.print();
//    obj.doUnion(3,5);
//    obj.print();
//    obj.doUnion(4,5);
//    obj.print();
    return 0;
}
