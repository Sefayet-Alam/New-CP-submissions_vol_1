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
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}
map<string,string> mp;
ll pow1(ll n, ll p)
{
    if (p == 0)
        return 1;
    ll x = pow1(n, p / 2);
    x = (x * x) % md;
    if (p % 2 == 0)
        return x;
    else
        return (x * n) % md;
}
 
 
char in[maxN],out[maxN];
int main()
{
    fast;
    //setIO();
    ll t;
    string s;
    cin>>t;
    while(t--)
    {
    vector<int>a(6);
    for(int i=0;i<6;i++) cin>>a[i];
    int dist = abs(a[2]-a[0]) + abs(a[1]-a[3]);
 
    if(a[0]==a[2] && a[0]==a[4]){
        if((a[5]>a[1] && a[5]<a[3]) || (a[5]<a[1] && a[5]>a[3])){ dist+=2;}
    }
    else if(a[1]==a[3] && a[1]==a[5]){
        if((a[4]>a[0] && a[4]<a[2])|| (a[4]<a[0] && a[4]>a[2])){ dist+=2;}
    }
    cout<<dist<<"\n";
    }
 
    return ghost;
}
 