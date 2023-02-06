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
#define watch(x) cerr << "\n" << (#x) << " is " << (x) << endl
#define fastio ios_base::sync_with_stdio(0)
#define flush_off cin.tie(0)
#define mod 1000000007
#define ganja 998244353
#define N 1000006
int isprime[N];
vector<ll>primes = {2ll};
ll A,B,k;
void seive()
{
	for(ll i=2; i*i<N; ++i)
	{
		if(isprime[i]) continue;

		for(int j=i+i; j<N; j+=i)
		{
			isprime[j] = 1;
		}
	}
	for(ll i=3; i<N; i+=2)
	{
		if(!isprime[i])
		{
			primes.push_back(i);
		}
	}
}

bool checkprime(ll k)
{
	for(auto i:primes)
	{
		if(i*i>k) return 1;
		if(k%i==0) return 0;
	}
	return 1;
}

ll calc(ll n)
{
	return (B/n)-((A-1)/n);
}



void solve()
{
	cin>>A>>B>>k;
	if(!checkprime(k))
	{
		cout<<0<<endl;
		return;
	}
	if(k<2000)
	{
		ll extra = 0;
		ll mot = 0;
		for(int i=0; i<30; ++i)
		{
			if(primes[i]>k) break;
			if(primes[i]==k) extra = mot;
			mot += calc(primes[i]);
			for(int j=0; j<i; ++j)
			{
				mot -= calc(primes[i]*primes[j]);
			}
		}
		cout<<mot-extra<<endl;
		return;
	}

	else if(k*k>=B)
	{
		if(k<=B && k>=A)
		{
			cout<<1<<endl;
		}
		else cout<<0<<endl;
		return;
	}
	else
	{
		auto it = lower_bound(primes.begin(), primes.end(),k);
		assert(*it==k);
		ll a = *it;
		++it;
		ll b = *it;
		++it;
		ll c = *it;

		ll arr[] = {a,a*a,a*a*a,a*b,a*a*b,a*b*b,a*b*c};
		int ans = 0;
		for(auto i:arr)
		{
			if(i<=b && i>=a) ++ans;
		}

		cout<<ans<<endl;

	}
}

int main()
{
	fastio;
	flush_off; //turn this off if cout needs to be flushed
    #ifndef ONLINE_JUDGE
        freopen("Error.txt", "w", stderr);
    #endif
    int t=1;
    // cin>>t;
    seive();
    while(t--) solve();
}