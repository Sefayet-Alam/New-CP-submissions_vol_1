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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a,b,c,d;
        ll s=n-2;
        if(s%4==0){cout<<(s/2)-1<<" "<<(s/2)+1<<" "<<"1 1"<<endl;}
        else if(s%4==2 && s>2){cout<<(s/2)-2<<" "<<(s/2)+2<<" "<<"1 1"<<endl;}
        else {cout<<(s/2)<<" "<<s-(s/2)<<" "<<"1 1"<<endl;}
    }
    return ghost;
}