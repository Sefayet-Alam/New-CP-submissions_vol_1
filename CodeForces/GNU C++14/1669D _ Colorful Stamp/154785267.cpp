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
 
 
int main()
{
    fast;
    //setIO();
 
    ll t;
    cin>>t;
    while(t--)
    {
    bool f=1;
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<string>v;
    string u="";
    for(ll j=0;j<n;j++)
    {
 
    if(s[j]=='W')
    {
    if(u.size()>0){
    v.push_back(u);
    u="";
    }
    }
 
    else{
    u+=s[j];
    }
 
    }
    if(u.size()>0){
    v.push_back(u);
    }
 
    for(auto it:v)
    {
    string m;
    m=it;
    if((count(m.begin(),m.end(),'R')==0)||((count(m.begin(),m.end(),'B')==0)))
    {
    f=0;
    break;
    }
    }
    if(f==1){
    cout<<"YES"<<endl;
    }
 
    else{
    cout<<"NO"<<endl;
    }
    }
 
    return ghost;
}