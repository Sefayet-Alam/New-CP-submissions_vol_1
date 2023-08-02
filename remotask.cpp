#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;


#define pb                  push_back
#define ll                  long long



const ll N = 2e6+10;
const ll M = 1e9+7;


vector<bool> Primes(N,1);
vector<ll>primenos;
void SieveOfEratosthenes(ll n)
{
    Primes[0]=0;
    Primes[1]=0;
    for (ll i=2;i*i<=n;i++) {
    if(Primes[i]==1){     
    for(ll j=i*i;j<=n;j+=i)
        Primes[j]=0;
        }
    }
}


int main()
{
   
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    SieveOfEratosthenes(20);
    ll n;
   while(cin>>n){
    vector<ll>vec(n);
    for(ll i=0;i<n;i++){
        cin>>vec[i];
    }
    bool on=0,pr=0;
    ll ans=-1;
    map<ll,ll>freq;
    for(ll i=0;i<n;i++){
        if(vec[i]==1){on=1;}
        else if(Primes[vec[i]]){
            pr=1;
            ans=vec[i];
        }
        freq[vec[i]]++;
    }
    if(freq[8] && freq[9]){
        pr=1;
        ans=89;
    }
    if(freq[4] && freq[0] && freq[9]){
        pr=1;
        ans=409;
    }
    if(freq[4]>1 && freq[9]){
        pr=1;
        ans=449;
    }
   
    if(freq[4] && freq[9]>1){
        pr=1;
        ans=499;
    }
    if(freq[4] && freq[6]>1 && freq[9]){
        pr=1;
        ans=6469;
    }
    if(freq[4] && freq[6] && freq[9]>1){
        pr=1;
        ans=6949;
    }
    if(on){
        cout<<1<<endl;
        cout<<1<<endl;
        continue;
    }
    if(pr){
        cout<<2<<endl;
        cout<<ans<<endl;
        continue;
    }
    bool th=0;
    for(ll i=0;i<n;i++){
        if(vec[i]==4 || vec[i]==9){
            th=1;
            ans=vec[i];
            break;
        }
        else if(vec[i]!=0){
            ans=vec[i];
        }
    }
    if(th){
        cout<<3<<endl;
        cout<<ans<<endl;
    }
    else{
        cout<<4<<endl;
        cout<<ans<<endl;
    }

   }
    return 0;
}

