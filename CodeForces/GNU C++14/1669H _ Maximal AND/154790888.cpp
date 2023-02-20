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
 
 
int main()
{
    fast;
    //setIO();
 
    ll t;
    cin>>t;
    while(t--)
    {
    ll n,k,tot=0;
    cin>>n>>k;
    vector<ll>r(n+1),c(32,0);
    for(ll i=0;i<n;i++)
    {
    cin>>r[i];
 
    for(ll q=30;q>=0;q--)
    {
    if((r[i]>>q)&1){
       c[q]++;
        }
    }
    }
    for(ll q=30;q>=0;q--)
    {
    if(k>=(n-c[q])){
    tot|=(1LL<<q);
    k=k-(n-c[q]);
    }
    }
    cout<<tot<<endl;
    }
 
    return ghost;
}