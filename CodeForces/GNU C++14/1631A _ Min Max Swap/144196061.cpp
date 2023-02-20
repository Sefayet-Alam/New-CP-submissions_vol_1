#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    ll t,i,j,k,x;
    cin>>t;
    for(i=0;i<t;i++)
    {
        ll n;
        cin>>n;
        vector<ll> a,b;
        for(j=0;j<n;j++)
        {
            cin>>x;
            a.push_back(x);
        }
        for(j=0;j<n;j++)
        {
            cin>>x;
            b.push_back(x);
        }
 
        for(j=0;j<n;j++)
        {
           if(a[j]<b[j]) swap(a[j],b[j]);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
 
     cout<<a[n-1]*b[n-1]<<endl;
    }
}