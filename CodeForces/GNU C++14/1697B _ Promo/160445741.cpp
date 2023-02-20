#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void solve()
{
    int n, m;
    cin>>n>>m;
    vector<int>vec(n);
    for(int i=0; i<n; i++){ cin>>vec[i]; }
    sort(vec.rbegin(),vec.rend());
    vector<ll>pre(n);
    pre[0]=vec[0];
    for(int i=1; i<n; i++){ pre[i]=vec[i]+pre[i-1]; }
    for(int idx=0; idx<m; idx++)
    {
        int x, y;
        cin>>x>>y;
        if(x==y){ cout<<pre[x-1]<<"\n"; }
        else{ cout<<pre[x-1]-pre[x-y-1]<<"\n"; }
    }
}
int main()
{
    fast;
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}