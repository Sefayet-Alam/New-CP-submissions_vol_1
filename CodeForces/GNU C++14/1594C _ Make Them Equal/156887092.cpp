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
    cin>>t;
    while(t--)
    {
           ll n;
    char ch;
    string s;
    cin>>n>>ch>>s;
    bool ok=true;
    ll in=-1;
    for(ll i=0;i<n;i++){
        if(s[i]==ch)in=i;
        if(s[i]!=ch)ok=false;
    }
    if(ok) {cout<<"0\n";}
    else if(in==-1){
        cout<<"2\n"<<n-1<<" "<<n<<"\n";
    }
    else if(in==n-1)
    {
        cout<<"1\n"<<in+1<<"\n";
    }
    else if(in>=n/2)
    {
 
        cout<<"1\n"<<in+1<<"\n";
    }
    else
    {
        cout<<"2\n"<<n-1<<" "<<n<<"\n";
    }
    }
 
    return ghost;
}