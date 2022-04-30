#ifndef HEAP_H
#define HEAP_H
#include <vector>

using namespace std;

class Heap
{
    public:
        Heap();
        void insertElement(int);
        void reArrange();
        void upReArrange();
        void extractMax();

        void print();
        int parent(int);
        int left(int);
        int right(int);

    private:
        vector<int> elements;
};

#endif // HEAP_H
