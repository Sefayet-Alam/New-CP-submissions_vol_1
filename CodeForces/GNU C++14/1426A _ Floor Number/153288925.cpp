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
        ll n,x;
        cin>>n>>x;
        ll r=2,fl=1;
        while(r<n)
        {
        r+=x;
        fl++;
        }
              cout<<fl<<endl;
    }
 
    return ghost;
}