#include <iostream>
#include <string.h>
#define cost 1

using namespace std;

//int edit_distance(string str1, string str2)
//{
//    int str1_size =str1.length();
//    int str2_size = str2.length();
//    if( str1_size< 1)
//        return str2_size;
//    if(str2_size<1)
//        return str1_size;
//    int min = INT_MAX;
//    int new_min;
//    if(str1[str1_size-1] == str2[str2_size-1])
//    {
//        min=edit_distance(str1.substr(0,str1_size-2),str2.substr(0,str2_size-2));
//    }
//    else
//    {
//        new_min=edit_distance(str1.substr(0,str1_size-2),str2.substr(0,str2_size-2))+cost;
//        if(min>new_min)
//            min=new_min;
//
//        new_min = edit_distance(str1, str2.substr(0, str2_size-2)) + cost;
//        if(min> new_min)
//            min = new_min;
//
//        new_min = edit_distance(str1.substr(0, str1_size-2), str2) + cost;
//        if(min> new_min)
//            min = new_min;
//
//    }
//    return min;

//}
int myarray[6][6];
int min_value(int a,int b,int c)
{
    return min(min(a,b),c);
}
//void print_array()
//{
//    for(int i=a.length();i>0;i--)
//    {
//        for(int j=b.length();j>0;j--)
//        {
//            if(a[i-1]==b[j-1])
//                if(myarray[i][j-1]<myarray[i-1][j])
//                {
//                    if(myarray[i][j-1]<myarray[i-1][j-1])
//                    {
//                        cout<<"delete-";
//                        myarray[i][j]=myarray[i][j-1]+1;
//                    }
//                }
//                else if(myarray[i-1][j]<myarray[i][j-1])
//                {
//                    if(myarray[i-1][j]<myarray[i-1][j-1])
//                    {
//                        cout<<"insert-";
//                        myarray[i][j]=myarray[i-1][j]+1;
//                    }
//                }
//                else if(myarray[i][j-1]>myarray[i-1][j-1])
//                {
//                    if(myarray[i-1][j]>myarray[i-1][j-1])
//                    {
//                        cout<<"change-";
//                        myarray[i][j]=myarray[i-1][j-1]+1;
//                    }
//                }
//            else
//                myarray[i][j]=min_value(myarray[i][j-1],myarray[i-1][j],myarray[i-1][j-1])+1;
//            {
//                if(myarray[i][j-1]<myarray[i-1][j])
//                {
//                    if(myarray[i][j-1]<myarray[i-1][j-1])
//                    {
//                        cout<<"delete-";
//                        myarray[i][j]=myarray[i][j-1]+1;
//                    }
//                }
//                else if(myarray[i-1][j]<myarray[i][j-1])
//                {
//                    if(myarray[i-1][j]<myarray[i-1][j-1])
//                    {
//                        cout<<"insert-";
//                        myarray[i][j]=myarray[i-1][j]+1;
//                    }
//                }
//                else if(myarray[i][j-1]>myarray[i-1][j-1])
//                {
//                    if(myarray[i-1][j]>myarray[i-1][j-1])
//                    {
//                        cout<<"change-";
//                        myarray[i][j]=myarray[i-1][j-1]+1;
//                    }
//                }
//            }
//        }
//    }
//}
int edit_distance_bottom_up(string a, string b)
{
    myarray[0][0]=0;
    for(int i=1;i<a.length()+1;i++)
        myarray[i][0]=i;
    for(int i=1;i<b.length()+1;i++)
        myarray[0][i]=i;
    for(int i=1;i<a.length()+1;i++)
    {
        for(int j=1;j<b.length()+1;j++)
        {
            if(a[i-1]==b[j-1])
                myarray[i][j]=min_value(myarray[i][j-1],myarray[i-1][j],myarray[i-1][j-1]);
            else
                myarray[i][j]=min_value(myarray[i][j-1],myarray[i-1][j],myarray[i-1][j-1])+1;
//            {
//                if(myarray[i][j-1]<myarray[i-1][j])
//                {
//                    if(myarray[i][j-1]<myarray[i-1][j-1])
//                    {
//                        cout<<"delete-";
//                        myarray[i][j]=myarray[i][j-1]+1;
//                    }
//                }
//                else if(myarray[i-1][j]<myarray[i][j-1])
//                {
//                    if(myarray[i-1][j]<myarray[i-1][j-1])
//                    {
//                        cout<<"insert-";
//                        myarray[i][j]=myarray[i-1][j]+1;
//                    }
//                }
//                else if(myarray[i][j-1]>myarray[i-1][j-1])
//                {
//                    if(myarray[i-1][j]>myarray[i-1][j-1])
//                    {
//                        cout<<"change-";
//                        myarray[i][j]=myarray[i-1][j-1]+1;
//                    }
//                }
//            }
        }
    }
    return myarray[a.length()][b.length()];
}
int main()
{
    string a = "hello";
    string b = "ahmed";
//    *myarray=new int [a.length()+1];
//    for(int i=0;i<a.length();i++)
//        myarray[i]=new int [b.length()+1];
//

    cout<<edit_distance_bottom_up(a,b);
    return 0;
}
