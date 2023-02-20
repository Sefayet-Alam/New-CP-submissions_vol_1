#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
template<class T> using ordered_set =tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;
#define fastio ios_base::sync_with_stdio(false)
#define flush cin.tie(NULL)
 
 
 
 
void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; ++i) cin>>arr[i];
    sort(arr,arr+n);
    arr[n-1]++;
    int ans = 1;
    for(int i=n-2; i>=0; --i)
    {
        if(arr[i+1]-arr[i]>1)
        {
            ++arr[i];
        }
    }
 
    for(int i=1; i<n; ++i)
    {
        if(arr[i-1]!=arr[i]) ++ans;
    }
 
    cout<<ans<<endl;
}
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("Error.txt", "w", stderr);
    #endif
    fastio;
    // flush;
    int t=1;
    cin>>t;
    while(t--) solve();
}