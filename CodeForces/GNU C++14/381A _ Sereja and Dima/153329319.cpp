#include <bits/stdc++.h>
#define ll long long
#define ghost 0
#define PI 3.1415926535897932385
#define INF 1000111222
#define eps 1e-7
#define maxN 1011
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
 
map<string,string> mp;
 
char in[maxN],out[maxN];
int main()
{
    fast;
    ll n;
    cin>>n;
    deque<ll>dq;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        dq.push_back(x);
    }
    ll s=0,d=0;
    for(int i=1;i<=n;i++)
    {
        if(i%2==1){
            if(dq.front()>dq.back()){s+=dq.front();dq.pop_front();}
            else {s+=dq.back();dq.pop_back();}
        }
        if(i%2==0){
            if(dq.front()>dq.back()){d+=dq.front();dq.pop_front();}
            else {d+=dq.back();dq.pop_back();}
        }
    }
    cout<<s<<" "<<d<<endl;
    return ghost;
}