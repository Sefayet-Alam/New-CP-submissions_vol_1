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
        vector<ll> v(n);
        for(ll i=0;i<n;i++){cin>>v[i];}
        if(n==1){
        cout<<"YES"<<endl;
        continue;
        }
        ll sum=0;
        map<ll,ll>mpp;
       for(ll i=0;i<n;i++){sum+=v[i];mpp[v[i]]++;}
       priority_queue<ll>pq;
       pq.push(sum);
       while(pq.size()<n)
       {
           ll x=pq.top();
           pq.pop();
           ll p=x/2,q=(x+1)/2;
           if(mpp.count(p)) {mpp[p]--; n--;}
           else pq.push(p);
           if(mpp[p]==0) mpp.erase(p);
            if(mpp.count(q)) {mpp[q]--; n--;}
           else pq.push(q);
           if(mpp[q]==0) mpp.erase(q);
       }
       if(pq.size()==0) {cout<<"YES"<<endl;}
       else cout<<"NO"<<endl;
 
 
 
    }
 
 
    return ghost;
}
 