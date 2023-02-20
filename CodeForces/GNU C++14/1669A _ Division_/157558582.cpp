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
        ll n;
        cin>>n;
        if(n<=1399) {cout<<"Division 4"<<endl;}
        else if(n>=1400 && n<=1599) {cout<<"Division 3"<<endl;}
        else if(n>=1600 && n<=1899) {cout<<"Division 2"<<endl;}
        else  {cout<<"Division 1"<<endl;}
    }
 
    return ghost;
}