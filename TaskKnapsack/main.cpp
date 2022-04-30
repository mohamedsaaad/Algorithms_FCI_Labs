#include <iostream>

using namespace std;
//int knapsack(int capacity,int value[],int weight[],int n)
//{
//    if( n==0||capacity==0 )
//        return 0;
//    else if (weight[n-1]> capacity)
//        knapsack(capacity,value,weight,n-1);
//    else
//        return max( value[n-1]+ knapsack(capacity-weight[n-1],value,weight,n-1),knapsack(capacity,value,weight,n-1));
//
//
//
//}

int D[1000][1000];
int knapsack2(int capacity,int value[],int weight[],int n)
{
    int T[n+1][capacity+1];

    for(int i=0; i<=n; i++)
    {
        for (int w=0; w<=capacity; w++)
        {

            if(i==0 ||w==0)
            {
                if(weight[0]<=capacity)
                {
                    T[i][w]=value[0];
                    D[i][w]=1;
                }
                else
                {
                    T[i][w]=0;
                    D[i][w]=0;
                }
            }
            else
            {
                T[i][w]=T[i-1][w];
                D[i][w]=0;
                if(weight[i-1]<=w)
                {
                    int v=value[i-1]+T[i-1][w-weight[i]];
                    if(v>T[i-1][w])
                    {
                        T[i][w]=v;
                        D[i][w]=1;
                    }
                }
            }


        }
    }
return T[n-1][capacity];
}
int knapsack3(int capacity,int value[],int weight[],int n)
{
    int T[2][capacity+1];
    int cur=0;
    for(int i=0; i<=n; i++)
    {
        for (int w=0; w<=capacity; w++)
        {

            if(i==0 ||w==0)
            {
                if(weight[0]<=capacity)
                {
                    T[i][w]=value[0];
                }
                else
                {
                    T[i][w]=0;
                }
            }
            else
            {
                T[cur][w]=T[1-cur][w];
                if(weight[i-1]<=w)
                {
                    int v=value[i-1]+T[1-cur][w-weight[i]];
                    if(v>T[cur][w])
                    {
                        T[cur][w]=v;
                    }
                }
            }


        }
        cur=1-cur;
    }
return T[cur][capacity];
}

int knapsack4(int capacity,int value[],int weight[],int n)
{
    int T[capacity];
    int cur=0;
    for(int i=0; i<=n; i++)
    {
        for (int w=0; w<=capacity; w++)
        {

            if(i==0)
            {
                T[w]=0;
            }
            else
            {
                T[cur][w]=T[1-cur][w];
                if(weight[i-1]<=w)
                {
                    int v=value[i-1]+T[1-cur][w-weight[i]];
                    if(v>T[cur][w])
                    {
                        T[cur][w]=v;
                    }
                }
            }


        }
        cur=1-cur;
    }
return T[cur][capacity];
}
int main()
{
    int value[]= {60,100,120};
    int weight[]= {10,20,30};
    int capacity=50;
    int number=3;
//    cout <<"The optimal is :" << knapsack(capacity,value,weight,number)<< endl;
    cout <<"The optimal is :" << knapsack2(capacity,value,weight,number)<<endl;
//    cout <<"The optimal is :" << knapsack3(capacity,value,weight,number)<<endl;
//    Print
    cout << "Path :";
    int i=number-1,w=capacity;
    while(i>0&&w!=0){
        int d=D[i][w];
        if(d==1){
            cout<<i<<endl;
            i--;
            w-=weight[i];
            }
        else
            i--;
    }

    return 0;
}
