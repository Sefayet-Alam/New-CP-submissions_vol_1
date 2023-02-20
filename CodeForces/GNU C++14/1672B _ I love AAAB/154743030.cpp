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
        string s;
       cin>>s;
       bool f=0;
       ll a=0,b=0;
       ll n=s.size();
       for(ll i=0;i<n;i++){
        if(s[i]=='B'){b++;}
        else{a++;}
        if(b>a){f=1; break;}
 
       }
       if(n==1){f=1;}
       if(b==0) {f=1;}
       if(s[0]=='B') {f=1;}
       if(s[n-1]!='B') {f=1;}
       if(f==1) {cout<<"NO"<<endl;}
       else{cout<<"YES"<<endl;}
 
 
    }
 
    return ghost;
}