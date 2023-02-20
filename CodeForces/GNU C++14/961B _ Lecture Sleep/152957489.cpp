#include <bits/stdc++.h>
#define ll long long
#define ghost 0
#define PI 3.1415926535897932385
#define INF 1000111222
#define eps 1e-7
#define maxN 1011
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
 
 
map<char,int> mp;
ll n,k;
vector<ll> lec(100001),b(100001);
vector<ll> psum(100001);
char in[maxN],out[maxN];
int main()
{
    fast;
 
    cin>>n>>k;
    vector<ll> lec(n+1),b(n+1);
    for(ll i=0;i<n;++i)
    {
        cin>>lec[i];
    }
    ll sum=0;
    for(ll i = 0;i<n;++i) {
  cin >> b[i];
  if(b[i]) {
   sum+= lec[i];
   lec[i] = 0;
  }
 }
 
 psum[0]=0;
 for(ll i=1;i<=n;++i)
    {
        psum[i]=psum[i-1]+lec[i-1];
    }
    ll bonus=0;
   for(int i = n; i >= k; --i) {
  bonus = max(bonus, psum[i] -psum[i-k]);
 }
    cout<<sum+bonus<<endl;
    return ghost;
}