#ifndef DISJOINTSET_H
#define DISJOINTSET_H


class DisjointSet
{
    public:
        DisjointSet(int);
        void doUnion(int,int);
        void resetParent(int,int);
    private:
        int *parent, *numOfNodes;
        int setSize;
};

#endif // DISJOINTSET_H
