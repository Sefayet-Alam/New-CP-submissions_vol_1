#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;


#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb                  push_back
#define ll                  long long

#define Setpre(n) cout<<fixed<<setprecision(n)



int main()
{
    fast;
    double d;
    while(cin>>d){
      double ans=0;
      ans=max(ans,sqrt(2)*d);
      double r=floor(d);
      if(d>=1) ans=max(ans,r+1);
      Setpre(10)<<ans<<endl;

    }


    return 0;
}


