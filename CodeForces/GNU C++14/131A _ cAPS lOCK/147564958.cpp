#include <bits/stdc++.h>
#include <sstream>
using namespace std;
using ll = long long;
using vl = vector<ll>;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
 
 
int main()
{
    fast;
    string s;
    cin>>s;
     ll p=0;
 
    for(int i=1;i<s.size();i++)
    {
    if(s[i]>='A' && s[i]<='Z') {p++;}
    }
    if(s[0]>='a' && s[0]<='z' && p==s.size()-1)
    {
 
        for(int i=1;i<s.size();i++)
        {
        s[i]+=32;
        }
        s[0]-=32;
 
        cout<<s<<endl;
    }
    else if(s[0]>='A' && s[0]<='Z' && p==s.size()-1)
    {
 
        for(int i=1;i<s.size();i++)
        {
        s[i]+=32;
        }
        s[0]+=32;
        cout<<s<<endl;
    }
    else cout<<s<<endl;
    return 0;
 
 
}