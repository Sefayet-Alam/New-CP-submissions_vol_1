#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

//VVI
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb                  push_back
#define ll                  long long
#define ff first
#define ss second
#define SZ(a) (int)a.size()
#define UNIQUE(a) (a).erase(unique(all(a)),(a).end())
#define eb emplace_back
#define mp make_pair



void setIO(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE

}


struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
ll n,m,d,k;

vector<ll>fold(vector<ll>&a,vector<ll>&b){
    vector<ll>c(n);
    for (ll i=0;i<n;i++) {
        for(ll j=0;j<n;j++) {
            ll k=(i+j)%n;
            c[k]=(c[k]+(a[i])*b[j])%m;
        }
    }
    return c;
}

int main()
{
    fast;
     ll t;
    //setIO();
     //ll tno=1;;
     t=1;
    //cin>>t;

    while(t--){
    //   freopen("cell.in", "r", stdin);
    //   freopen("cell.out", "w", stdout);
      while(cin>>n>>m>>d>>k){
        //array input
        vector<ll>vec(n);
        for(ll i=0;i<n;i++){
            cin>>vec[i];
        }

        // steps
        vector<ll>s(n);
        for(ll i=0;i<n;i++){
            s[i]=min(i,n-i)<=d? 1:0;
        }
        // invariant: a * s^k
        vector<ll>a(n);
        a[0]=1;
        while(k>0){
            if(k&1) {
				a=fold(a, s);
				k--;
			}
			if(k>0){
				s=fold(s,s);
				k=k/2;
			}
        }
        a=fold(vec,a);
        for(ll i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
      }
    }


    return 0;
}

