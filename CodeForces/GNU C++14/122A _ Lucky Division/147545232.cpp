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
    bool b=true;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='4' || s[i]=='7') b=true;
        else {b=false; break;}
    }
    stringstream geek(s);
    int x = 0;
    geek >> x;
    if(x%4==0 || x%7==0  || x%44==0  || x%47==0  || x%74==0  || x%77==0  || x%444==0  || x%447==0  || x%477==0 || x%744==0 || x%747==0 || x%777==0)  {b=true;}
 
 
    if(b==true) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}