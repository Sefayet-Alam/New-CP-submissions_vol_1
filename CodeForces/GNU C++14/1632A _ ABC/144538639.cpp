#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    ll i,j,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        if (n==1) cout<<"YES"<<endl;
        else if(n==2) {
            if (s[0]!=s[1]) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
 
 
}