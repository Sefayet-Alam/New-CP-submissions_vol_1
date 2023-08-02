#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;


#define ll long long


int main()
{
 
    // freopen("fenwick.in", "r", stdin);

    // freopen("fenwick.out", "w", stdout);
   
     ll n;
     while(cin>>n){
     vector<ll>vec(n+1);
     for(ll i=1;i<=n;i++){
        cin>>vec[i];
        ll sum=0;
        for(ll j=1;(i&j)==0;j*=2){
            vec[i-1]-=vec[i-j];
        }
        
     }
    for(ll i=1;i<=n;i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
     }
 
    return 0;
}

