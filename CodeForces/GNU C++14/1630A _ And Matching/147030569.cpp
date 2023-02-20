#include <bits/stdc++.h>
#include<math.h>
 
using namespace std;
 
#define ll long long
const ll mod = 1e9 + 7,inf = 1e18;
 
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll n,t,k,x[100005];
 
int main()
{
    fast;
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        
        cin>>n>>k;
       
        for(int j=0;j<n;j++) x[j]=j;
        if(k!=n-1) swap(x[k],x[0]);
        else swap(x[n-2],x[0]),swap(x[1],x[n-4]);
        if (n==4 && k==3) {cout<<-1<<endl; }
        else {
            for(int j=0;j<n/2;j++) cout<<x[j]<<" "<<x[n-j-1]<<endl;
        }
    }
}