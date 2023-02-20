#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    cin>>n;
    if(n%2){ cout<<"9 "<<n-9<<"\n"; }
    else{ cout<<"4 "<<n-4<<"\n"; }
}
int main()
{
    fast;
    int tc=1;
    //cin>>tc;
    while(tc--) solve();
    return 0;
}