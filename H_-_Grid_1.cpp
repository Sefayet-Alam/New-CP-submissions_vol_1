#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1000 ;
int dp[N+5][N+5];
char grid[N+5][N+5];
const int mod=1000000007;
int fn(int i, int j)
{
    if(i==0 && j==0) return 1;
    if(dp[i][j]!=-1) return dp[i][j];
    int ans=0;
    if(i-1>=0 && grid[i-1][j]=='.') ans+=fn(i-1,j);
    if(j-1>=0 && grid[i][j-1]=='.') ans+=fn(i,j-1);
    return dp[i][j]=ans%mod;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,m; cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        string s; cin>>s;
        for(int j=0;j<m;j++)
        {
            grid[i][j]=s[j];
        }
    }
    memset(dp,-1,sizeof(dp));
    int res=fn(n-1,m-1);
    cout<<res<<endl;
}