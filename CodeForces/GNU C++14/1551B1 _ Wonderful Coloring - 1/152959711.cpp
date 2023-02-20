#include <bits/stdc++.h>
#define ll long long
#define ghost 0
#define PI 3.1415926535897932385
#define INF 1000111222
#define eps 1e-7
#define maxN 1011
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
 
 
 
 
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        unordered_map<char,ll>mp;
        ll a=0,b=0;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }
        for(auto &it:mp)
        {
            if(it.second>1) {a++;}
            else if(it.second==1) {b++;}
        }
        cout<<a+b/2<<endl;
    }
    return ghost;
}
 