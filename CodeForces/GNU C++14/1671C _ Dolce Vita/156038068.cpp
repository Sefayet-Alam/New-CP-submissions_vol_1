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
        ll n,x;
        cin>>n>>x;
        vector<ll> v(n);
        ll c=0;
        ll sum=0;
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            sum+=v[i];
        }
        sort(v.begin(),v.end());
        ll j=n-1,k;
        ll ans=0,f=0;
        while(j>=0)
        {
           k=x-sum;
           sum-=v[j];
           if(k<0) {j--;}
           else{
            f=k/(j+1)-c;
            ans+=(j+1)*(f+1);
            c+=f+1;
            j--;
           }
        }
        cout<<ans<<endl;
 
    }
 
 
    return ghost;
}