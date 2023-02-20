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
map<char,ll> mp;
 
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
        ll i,vec[n];
        for(i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        ll x=0;
        i=0;
          if(n%2){
            x = vec[0];
            i = 1;
        }
        bool f=false;
        for(; i <=n-1; i+=2) {
            if(vec[i] >= x && vec[i+1] >= x){
                x = max(vec[i], vec[i+1]);
            }
            else{
                f = true;
            }
 
        }
        if(f) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}