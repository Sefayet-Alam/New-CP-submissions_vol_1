#include <bits/stdc++.h>
#define ll long long
#define ghost 0
#define PI 3.1415926535897932385
#define INF 1000111222
#define eps 1e-7
#define maxN 1011
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
 
map<string,string> mp;
 
char in[maxN],out[maxN];
int main()
{
    fast;
    ll x,y,z;
    cin>>x>>y>>z;
    ll pl=0,mi=0;
    pl=x;
    mi=y*(-1);
    ll sum=pl+mi;
    if(z==0)
    {
        if(sum>0) {cout<<"+"<<endl;}
        else if(sum==0) {cout<<0<<endl;}
        else {cout<<"-"<<endl;}
    }
    else if(sum>0)
    {
        ll l=sum-z;
        if(l>0) {cout<<"+"<<endl;}
        else {cout<<"?"<<endl;}
 
    }
    else if(sum<0)
    {
        ll l=sum+z;
        if(l>=0) {cout<<"?"<<endl;}
        else {cout<<"-"<<endl;}
 
    }
    else if(sum==0){cout<<"?"<<endl;}
 
    return ghost;
}