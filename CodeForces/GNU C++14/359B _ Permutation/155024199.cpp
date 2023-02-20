#include <bits/stdc++.h>
#define ll long long
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
void ghost()
{
 
    ll a,b;
    cin>>a>>b;
    vector<ll>vec;
    for(int i=1;i<=a;i++)
    {
    if(b>0) {vec.push_back(2*i); vec.push_back(2*i-1);}
    else {vec.push_back(2*i-1);vec.push_back(2*i);}
    b--;
    }
 
    for(ll i=0;i<vec.size();i++) {cout<<vec[i]<<" ";}
 
    cout<<endl;
}
char in[maxN],out[maxN];
int main()
{
    fast;
    //setIO();
    ghost();
    return 0;
 
}
 