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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
map<string,string> mp;
 
char in[maxN],out[maxN];
int main()
{
    fast;
    //setIO();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++){cin>>v[i];}
         ll a=v[0]-1,b=v[0],c=v[0]+1,f=0;
           for(ll i=0;i<n;i++){
            if(a+1 <v[i]){
                f++;
                break;
            }
            a++;
        }
        for(ll i = 0; i < n; i++){
            if(b+1 < v[i]){
                f++;
                break;
            }
            b++;
        }
        for(ll i=0;i<n; i++){
            if(c+1 < v[i]){
                f++;
                break;
            }
            c++;
        }
        if(f==3) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
 
 
 
    }
 
 
    return ghost;
}
 