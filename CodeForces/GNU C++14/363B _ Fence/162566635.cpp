#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void solve()
{
    int n, k, ans=1;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(i){ arr[i]+=arr[i-1]; }
    }
    //for(auto it:arr){ cout<<it<<" "; }
    //cout<<"\n";
    int temp=arr[k-1];
    for(int i=n-1; i>=k; i--)
    {
        arr[i]-=arr[i-k];
        //cout<<arr[i]<<"\n";
        if(temp>arr[i]){ ans=i-k+2; temp=arr[i]; }
    }
    cout<<ans<<"\n";
}
int main()
{
    fast;
    int tc=1;
    //cin>>tc;
    while(tc--) solve();
    return 0;
}