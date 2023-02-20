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
        ll n,k;
        cin>>n>>k;
        if(n%2!=0){cout<<n/2<<" "<<n/2<<" "<<1<<endl;}
        else{
            if(n%4==0){
                cout<<n/2<<" "<<n/4<<" "<<n/4<<endl;
            }
            else{
                cout<<(n-1)/2<<" "<<(n-1)/2<<" "<<2<<endl;
            }
        }
    }
 
    return ghost;
}
 