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
    t=1;
    while(t--)
    {
       string s;
       cin>>s;
       ll n=s.size();
       bool f=0;
       for(ll i=0;i<n;i++)
       {
           if(s[i]==s[i+1] && s[i]==s[i+2] && s[i]==s[i+3] && s[i]==s[i+4] && s[i]==s[i+5] && s[i]==s[i+6] ) { f=1; break;}
       }
       if(f) {cout<<"YES"<<endl;}
       else{ cout<<"NO"<<endl;}
 
    }
 
 
    return ghost;
}