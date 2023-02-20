#include<bits/stdc++.h>
#define ll  long long
using namespace std;
 
 
 
 
 
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,b,x,y;
        cin>>n>>b>>x>>y;
        ll sum=0,curr=0;
        while(n--)
        {
            if(curr+x<=b) { curr+=x; sum+=curr;}
            else {curr-=y; sum+=curr;}
        }
        cout<<sum<<endl;
    }
 
 
 
    return 0;
}