#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;


#define ll                  long long


int main()
{
    
      ll m,k;
      cin>>m>>k;
      ll x;
      ll tot=0;
      for(ll i=0;i<k;i++){
        cin>>x;
        tot+=x;
      }
      ll ans=(tot+m-1)/m;
      cout<<ans<<endl;

    return 0;
}

