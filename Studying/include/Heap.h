#ifndef HEAP_H
#define HEAP_H
#include <vector>

using namespace std;
class Heap
{
    public:
        Heap();
        void insertElement(int);
        void reArraneg(int);
        void swapElements(int,int);
        int getMax(int,int);

        void print();
        int parentOf(int);
        int rightOf(int);
        int leftOf(int);
    private:
        vector<int> elements;
};

#endif // HEAP_H
