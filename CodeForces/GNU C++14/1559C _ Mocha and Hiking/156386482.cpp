#include <bits/stdc++.h>
#define ll long long
#define ghost 0
#define PI 3.1415926535897932385
#define INF 1000111222
#define eps 1e-7
#define maxN 1011
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
 
const ll md = 1000000007;
void setIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
map<string,string> mp;
 
char in[maxN],out[maxN];
int main()
{
    fast;
    //setIO();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
       vector<ll> v(n),ans;
       for(ll i=0;i<n;i++)
       {
           cin>>v[i];
       }
       if(v[0])
       {
           ans.push_back(n+1);
           for(ll i=1;i<=n;i++)
           {
               ans.push_back(i);
           }
       }
       else{
        ll ind=find(v.begin(),(v).end(),1)-v.begin();
         for(ll i=0;i<ind;i++){
                ans.push_back(i+1);
            }
            ans.push_back(n+1);
            for(ll i=ind;i<n;i++){
                ans.push_back(i+1);
            }
       }
       for(auto it:ans){
            cout<<it<<" ";
        }
        cout<<endl;
    }
 
    return 0;
}
 