#ifndef DISJOINTSET_H
#define DISJOINTSET_H


class DisJointSet
{
    public:
        DisJointSet(int);
        bool doUnion(int,int);
        int findParent(int);
        void print();
        void resetParent(int,int);
    private:
        int *parent,*numOfNodes;
        int setSize;
};

#endif // DISJOINTSET_H
