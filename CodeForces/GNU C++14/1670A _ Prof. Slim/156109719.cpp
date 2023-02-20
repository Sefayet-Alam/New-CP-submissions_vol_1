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
    while(t--){
    ll n,nega=0,posi=0;
    cin>>n;
    vector<ll>v(n+1);
    for(ll i=0;i<n;i++){
            cin>>v[i];
 
    }
 
    ll l=0,r=n-1;
    while(l<r)
    {
        if(v[l]>0 && v[r]<0){v[l]=-v[l];v[r]=-v[r];l++;r--;}
        else if(v[l]<0){l++;}
        else{r--;}
    }
 
       if(is_sorted(v.begin(),v.begin()+n)){cout<<"YES"<<endl;}
       else{cout<<"NO"<<endl;}
 
    v.clear();
    }
    return ghost;
}