#include<iostream>
 
using namespace std;
 
int main()
{
 
    int i,j,t;
    cin>> t;
    int m[t];
    for(i=0;i<t;i++)
    {
        int count=0;
        cin>>j;
        int a[j];
        int k;
        for(k=0;k<j;k++)
        {
            cin>>a[k];
        }
        int max=a[0];
 
        for(k=0;k<j;k++)
        {
 
 
           if (a[k]>max)  {  max=a[k];}
 
        }
         int min=a[0];
 
        for(k=0;k<j;k++)
        {
 
 
           if (a[k]<min)  {  min=a[k];}
 
        }
 
        m[i]=max-min;
    }
    for(i=0;i<t;i++)
    {
    cout<<m[i]<<endl;
    }
}