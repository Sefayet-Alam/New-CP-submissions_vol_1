#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

//VVI
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb                  push_back
#define ll                  long long


int main()
{
    fast;
     ll t;
  
     t=1;
    cin>>t;

    while(t--){
      ll n;
      cin>>n;
      ll maxm=0;
      char grid[3][3*n];
      for(ll i=0;i<3;i++){
        for(ll j=0;j<3*n;j++){
            cin>>grid[i][j];
        }
      }
     for(ll k=0;k<n;k++){
        ll curr=0;
        for(ll i=0;i<3;i++){
            for(ll j=k*3;j<k*3+3;j++){
               if(grid[i][j]=='*') curr++;
            }
        }
        maxm=max(maxm,curr);
     }
     cout<<maxm*4<<endl;
    }

    return 0;
}

