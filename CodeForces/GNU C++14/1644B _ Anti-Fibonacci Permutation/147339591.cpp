#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vl = vector<ll>;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
 
 
int main()
{
    fast;
    int t;
    cin>>t;
   while(t--)
   {
       ll n;
 
       cin>>n;
        ll v[n];
        int i,j,k;
       ll p=0;
       for(i=1;i<=n;i++) v[i]=n-i+1;
       for(k=1;k<=n;k++)
       {
 
        for(j=1;j<=n;j++)
        {
        cout<<v[j]<<" ";
        }
        cout<<endl;
 
        swap(v[1],v[k+1]);
 
       }
 
 
   }
    return 0;
}