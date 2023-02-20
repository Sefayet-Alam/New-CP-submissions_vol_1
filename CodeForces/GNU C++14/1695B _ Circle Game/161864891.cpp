#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void solve()
{
    int n, mn=INT_MAX;
    cin>>n;
    vector<int>vec(n);
    for(int i=0; i<n; i++){ cin>>vec[i]; mn=min(mn,vec[i]); }
    if(n%2){ cout<<"Mike\n"; }
    else
    {
        int pos;
        for(int i=0; i<n; i++)
        {
            if(mn==vec[i]){ pos=i+1; break; }
        }
        if(pos%2==0){ cout<<"Mike\n"; }
        else{ cout<<"Joe\n"; }
    }
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}