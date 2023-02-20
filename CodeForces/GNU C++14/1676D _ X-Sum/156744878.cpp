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
 
 
 
char in[maxN],out[maxN];
int main()
{
    fast;
    //setIO();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll arr[n][m];
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                cin>>arr[i][j];
            }
        }
        ll ans=-1;
 
          for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
              ll x=i,y=j,sum=arr[i][j];
              while(x+1<n && y+1<m)
              {
                  x++,y++;
                  sum+=arr[x][y];
              }
              x=i,y=j;
              while(x-1>=0 && y-1>=0)
              {
                  x--,y--;
                  sum+=arr[x][y];
              }
            x=i,y=j;
              while(x+1<n && y-1>=0)
              {
                  x++,y--;
                  sum+=arr[x][y];
              }
            x=i,y=j;
              while(x-1>=0 && y+1<m)
              {
                  x--,y++;
                  sum+=arr[x][y];
 
              }
 
            ans=max(ans,sum);
            }
 
        }
        cout<<ans<<endl;
    }
 
    return ghost;
}
 