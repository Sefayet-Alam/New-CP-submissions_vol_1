#include <bits/stdc++.h>
#include <cstdlib>
#include<string>
#include <sstream>
using namespace std;
 
#define ll long long
const ll mod = 1e9 + 7,inf = 1e18;
 
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
     string s;
        cin>>s;
        ll n=s.size();
        string s1="";
        for(int i=n-1;i>0;i--)
        {
            int a=s[i]-'0';
            int b=s[i-1]-'0';
        if(a+b>9)
        {
                for(int j=0;j<i-1;j++) {cout<<s[j];}
                cout<<a+b;
                for(int j=s1.size()-1;j>=0;j--)
                {
                    cout<<s1[j];
                }
                cout<<endl;
                return;
 
        }
            else s1+=s[i];
 
        }
 
        if(n==2)
        {
            int a=s[0]-'0';
            int b=s[1]-'0';
            cout<<a+b<<endl;
        }
        else{
            int a=s[0]-'0';
            int b=s[1]-'0';
            cout<<a+b<<s.substr(2)<<endl;
        }
 
}
 
int main()
{
    fast;
    ll t;
    cin>>t;
    for(ll f=0;f<t;f++)
    {
       solve();
 
    }
    return 0;
}