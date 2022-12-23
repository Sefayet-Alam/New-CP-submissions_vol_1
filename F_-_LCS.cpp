#include<bits/stdc++.h>

using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	            "\n"
#define pb                  push_back
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<ll>());
#define pn                  printf("\n")
#define md                  10000007
#define debug               printf("I am here\n")

#define l(s)                      s.size()
#define tcas(i,t)             for(ll i=1;i<=t;i++)
#define pcas(i)                printf("Case %lld: ",i)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define M 10000

void setIO(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE

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
        string s,str;
        cin>>s>>str;
        ll n=s.size();
        ll m=str.size();

        ll dp[n+1][m+1];
        memset(dp,0,sizeof(dp));
        for(ll i=1;i<=n;i++){
            for(ll j=1;j<=m;j++){
                if(s[i-1]==str[j-1]){
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        //DP TABLE
        // for(ll i=0;i<=n;i++){
        //     for(ll j=0;j<=m;j++){
        //        cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        string ans="";
        ll x=n,y=m;
        while(x!=0 && y!=0){
            if(dp[x-1][y]==dp[x][y]){
                --x;
            }
            else if(dp[x][y-1]==dp[x][y]){
                --y;
            }
            else{
                ans=str[y-1]+ans;
                --y;
                --x;
            }
        }
        cout<<ans<<endl;
    }


    return 0;
}

