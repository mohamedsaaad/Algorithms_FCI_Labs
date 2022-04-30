#include <iostream>

using namespace std;
int myarray[]={8,4,7,2,6,5,3,8};
void mergeHalves(int arr[],int aStart,int aEnd,int mid)
{
    int mArray[aEnd+1],i=0;
    int *f=&arr[aStart],*s=&arr[mid+1];
    do
    {
        cout<<"f: "<<*f<<"\ts: "<<*s<<endl;
//        cout<<"start: "<<arr[mid]<<"\tend: "<<arr[aEnd]<<endl;
        cout<<"f: "<<f<<"\ts: "<<s<<endl;
        cout<<"start: "<<&arr[mid]<<"\tend: "<<&arr[aEnd]<<endl;
        if(*f>*s||f>&arr[mid])
        {
            mArray[i]=*s;
            s++;
        }
        else if(*f<*s||s>&arr[aEnd])
        {
            mArray[i]=*f;
            f++;
        }
        i++;
        for(int j=0;j<i;j++)
            cout<<myarray[j]<<"\t";
        cout<<endl;
    }while(f<=&mid||s<=&aEnd);
    cout<<"my array: ";
    i=0;
    for(int j=aStart;j<aEnd+1;j++,i++)
    {
        myarray[j]=mArray[i];
    }
    for(int j=0;j<8;j++)
        cout<<myarray[j]<<"\t";
}
void mergSort(int arr[],int aStart,int aEnd)
{
    int mid=aEnd/2;
    cout<<"start:"<<aStart<<"\t mid: "<<mid<<"\t aEnd: "<<aEnd<<endl;
    if(aStart<aEnd)
    {
        mergSort(arr,aStart,mid);
        mergSort(arr,mid+1,aEnd);
        mergeHalves(arr,aStart,aEnd,mid);
    }
    else
        return ;
}

int main()
{

    mergSort(myarray,0,7);
    return 0;
}
