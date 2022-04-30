#ifndef KNAPSACK_H
#define KNAPSACK_H
#include <vector>
#include "Data.h"

using namespace std;
class KnapSack
{
    public:
        KnapSack(int,int);
        int getOptimal();
        int saad(int,int);
    private:
        int maxWeight, numElement;
        vector<Data> elements;
};

#endif // KNAPSACK_H
