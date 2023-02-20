#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    ll k,j,t;
    cin>>t;
    for(k=0;k<t;k++)
    {
        ll n;
        cin>>n;
        if(n==2) {cout<<1<<" "<<0<<endl;}
        else {ll cnt=0;
        ll g=n-1;
        while(g!=0)
        {
            g/=2; cnt++;
        }
        cnt--;
        int x=pow(2,cnt);
        for(j=1;j<x;j++)
        {
            cout<<j<<" ";
        }
        cout<<0<<" ";
 
        for(j=x;j<n-1;j++)
        {
            cout<<j<<" ";
        }
        cout<<n-1<<endl;
 
    }
    }
 
 
}