#ifndef KNAPSACK_H
#define KNAPSACK_H
#include <vector>
#include "Item.h"

using namespace std;
class KnapSack
{
    public:
        KnapSack(int,int);
        int getOptimal(int,int);
        void addItem(int,int);
        void print();
    private:
        int num;
        int **t;
        int **d;
        int *v;
        int *w;
        vector<Item> items;
        int numOfElements,maxWeight;
};

#endif // KNAPSACK_H
