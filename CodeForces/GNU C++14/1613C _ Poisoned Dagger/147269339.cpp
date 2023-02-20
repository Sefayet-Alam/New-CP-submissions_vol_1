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
    while (t--){
        ll n,h;
        cin>>n>>h;
         vector<ll> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
 
        ll l = 1,r =h,ans = h;
        while (l <= r){
            ll mid = (l + r)/2;
            ll attack=0;
            for(int i=0;i<n;i++){
           ll curr=mid;
           if(i<n-1){
               ll d=a[i+1]-a[i];
               if(d<mid) curr=d;
           }
           attack+=curr;
       }
 
       if(attack>=h){
           ans=mid;r=mid-1;
       }
       else l=mid+1;
        }
        cout<<ans<<endl;
    }
    return 0;
}