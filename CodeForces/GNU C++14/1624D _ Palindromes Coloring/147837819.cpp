#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vl = vector<ll>;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve()
{
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll m=n/k;
    ll a=0,b=0;
    if(m==1)cout<<"1\n";
    else
    {
        unordered_map<ll,ll>mpp;
        for(int i=0;i<n;i++) mpp[s[i]]++;
        for(char ch='a';ch<='z';ch++)
        {
            if(mpp[ch]%2==1)b++;
            a+=mpp[ch]/2;
        }
        ll a1=a/k;
        b+=(a%k)*2;
        a1*=2;
        if(b>=k)a1++;
        cout<<a1<<"\n";
    }
}
 
 
int main()
{
    fast;
    ll t;
 
    cin>>t;
    while(t--)
    {
        solve();
    }
 
    return 0;
}