#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int even=0;
        int odd=0;
     for(int i=0;i<n;i++)
     {
         if(a[i]%2==0)
            even++;
         else odd++;
 
     }
     if(even%2==0&&odd%2==0)
     {
         cout<<"YES"<<endl;
     }
     else
     {
         int flag=0;
         for(int i=1;i<n;i++)
         {
             if(a[i]-a[i-1]==1)
             {
                 flag=1;
                 break;
             }
 
         }
 
             if(flag==1)
                cout<<"YES"<<endl;
             else
                cout<<"NO"<<endl;
     }
 
 
    }
 
 
}