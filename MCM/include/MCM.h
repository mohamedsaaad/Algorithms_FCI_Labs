#ifndef MCM_H
#define MCM_H


class MCM
{
    public:
        MCM();
        int getOptimal(int,int);
        void outSol(int,int);
    private:
        int numOfE;
        int **m;
        int **d;
        int *p;
        int optimal;
};

#endif // MCM_H
