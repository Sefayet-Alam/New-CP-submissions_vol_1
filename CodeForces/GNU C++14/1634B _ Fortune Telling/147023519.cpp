#include <bits/stdc++.h>
#include<math.h>
 
using namespace std;
 
#define ll long long
const ll mod = 1e9 + 7,inf = 1e18;
 
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
 
int main()
{
    fast;
    ll t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        ll n,ali,des,c=0;
        cin>>n>>ali>>des;
        vector<ll> a(n);
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
            c+=(a[j]%2);
 
        }
 
    if(c%2==0)
        {
        if(des%2==ali%2)
        {
            cout<<"Alice\n";
        }
        else cout<<"Bob\n";
        }
    else
        {
        if(des%2!=ali%2)
        {
            cout<<"Alice\n";
        }
        else cout<<"Bob\n";
        }
    }
    return 0;
}