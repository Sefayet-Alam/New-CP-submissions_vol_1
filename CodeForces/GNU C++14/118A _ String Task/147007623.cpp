#include <bits/stdc++.h>
 
 
using namespace std;
 
#define ll long long
const ll mod = 1e9 + 7,inf = 1e18;
 
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
 
int main()
{
    fast;
    string s;
    cin>>s;
    string p;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y' ||s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y') continue;
 
        else if(s[i]>'A' && s[i]<='Z' ) {s[i]=s[i]+32; cout<<'.'<<s[i];}
 
        else {cout<<'.'<<s[i];}
 
    }
 
    return 0;
}