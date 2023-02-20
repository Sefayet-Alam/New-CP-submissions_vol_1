#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void solve()
{
    int n, m, sum=0;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        int x; cin>>x;
        sum+=x;
    }
    cout<<max(0,sum-m)<<"\n";
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}