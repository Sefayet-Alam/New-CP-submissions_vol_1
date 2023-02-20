#include <bits/stdc++.h>
#define ll long long
#define ghost 0
#define PI 3.1415926535897932385
#define INF 1000111222
#define eps 1e-7
#define maxN 1011
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
 
map<char,int> mp;
 
char in[maxN],out[maxN];
int main()
{
    fast;
    string s,p;
 
 
 
    getline(cin,s);
    getline(cin,p);
    bool f=1;
    for(ll i=0;i<s.size();i++)
    {
      mp[s[i]]++;
    }
 
    for(ll i=0;i<p.size();i++)
    {
        if(mp[p[i]]>0||p[i]==' ')
        {
        mp[p[i]]--;
        }
 
      else
       {
       f=0;
       break;
       }
    }
 
    if(f==0) {cout<<"NO"<<endl;}
    else {cout<<"YES"<<endl;}
 
 
    return ghost;
}