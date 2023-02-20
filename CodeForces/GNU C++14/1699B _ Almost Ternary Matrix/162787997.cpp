#include<bits/stdc++.h>
 
using namespace std;
 
 
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl              "\n"
#define pb                  push_back
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007
#define debug               printf("I am here\n")
 
#define l(s)                      s.size()
#define tcas(i,t)             for(ll i=1;i<=t;i++)
#define pcas(i)                printf("Case %lld: ",i)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
#define M 10000
ll n,m;
bool isvalid(ll i,ll j){
    if(i>=0 && i<n && j>=0 && j<m) return true;
 
    return false;
}
int main()
{
    fast;
     ll t;
     //ll tno=1;;
     //t=1;
    cin>>t;
    while(t--){
 
    cin>>n>>m;
    ll v[n+1][m+1];
 
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++){
                if(i%4==0 || i%4==1){
                    if(j%4==0 || j%4==1){
                        v[i][j]=1;
                    }
                    else{v[i][j]=0;}
                }
                else{
                    if(j%4==0 || j%4==1){
                        v[i][j]=0;
                    }
                    else{v[i][j]=1;}
 
                }
        }
    }
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++){
            cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
    }
 
 
 
 
 
 
 
 
    return 0;
}