#include <bits/stdc++.h>
#define ll long long
#define ghost 0
#define PI 3.1415926535897932385
#define INF 1000111222
#define eps 1e-7
#define maxN 1011
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
 
const ll md = 1000000007;
void setIO(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}
map<string,string> mp;
ll pow1(ll n, ll p)
{
    if (p == 0)
        return 1;
    ll x = pow1(n, p / 2);
    x = (x * x) % md;
    if (p % 2 == 0)
        return x;
    else
        return (x * n) % md;
}
 
 
char in[maxN],out[maxN];
int main()
{
    fast;
    setIO();
    ll t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans = 1e9;
    for(int i='a';i<='z';i++){
        int change=0;
        int l=0,r=n-1;
        while(l<=r){
            if(s[l]!=s[r]){
                if(s[l]==i){
                    l++;
                    change++;
                }
                else if(s[r]==i){
                    r--;
                    change++;
                }
                else{
                    change=1e9;
                    break;
                }
            }
            else{
                l++;
                r--;
            }
        }
        ans=min(ans,change);
    }
    if(ans == 1e9) cout<<-1<<"\n";
    else cout<<ans<<"\n";
    }
    return ghost;
}