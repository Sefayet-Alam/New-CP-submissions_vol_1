#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll                  long long

int main()
{
   
      ll n;
      cin>>n;
      vector<pair<ll,ll>>vec;
      ll x,y;
      for(ll i=1;i<=n;i++){
        cin>>x>>y;
        ll z=max(abs(x),abs(y));
        vec.push_back({z,i});
      }
      sort(vec.begin(),vec.end());
      bool f=0;
      vector<ll>ans;
      for(ll i=0;i<n;i++){
        if(vec[i].first<i+1){
          f=1;
          break;
        }
        ans.push_back(vec[i].second);
      }
      if(f) cout<<-1<<endl;
      else{
        for(auto it:ans){
          cout<<it<<" ";
        }
        cout<<endl;
      }

    return 0;
}

