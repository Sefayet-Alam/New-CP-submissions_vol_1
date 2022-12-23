#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
/*
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using ordered_set =tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;
// ordered_set.find_by_order(k) returns the iterator to kth element
// ordered_set.order_of_key(k) returns the number of elements strictly less than k */
#define fastio ios_base::sync_with_stdio(false)
#define flush_off cin.tie(NULL)
#define mod 1000000007
 
 
 
 
void solve()
{
    ll n,k;
    cin>>n>>k;
    ll m = n-k+1;
    ll arr[k];
    for(auto &i:arr) cin>>i;
 
    ll last = (arr[0]+m-1)/m;
    if(arr[0]<0)
    {
        last = arr[0]/m;
    }
 
    for(int i=1; i<k; ++i)
    {
        ll now = arr[i]-arr[i-1];
        if(last<=now) last=now;
        else
        {
            cout<<"No"<<endl;
            return;
        }
    }
 
    cout<<"Yes"<<endl;
}
 
int main()
{
    fastio;
    flush_off; //turn this off if cout needs to be flushed
    #ifndef ONLINE_JUDGE
        freopen("Error.txt", "w", stderr);
    #endif
    int t=1;
    cin>>t;
    while(t--) solve();
}