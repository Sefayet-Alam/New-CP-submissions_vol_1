#include <bits/stdc++.h>
#define ll long long
#define ghost 0
#define PI 3.1415926535897932385
#define INF 1000111222
#define eps 1e-7
#define pb push_back
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define rep(i,n) for(int i=0;i<n;i++)
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
 
int a[105][105];
int main()
{
    fast;
    //setIO();
 
    string s;
    ll t;
    cin>>t;
    //t=1;
    while(t--)
    {
      int n,m;
        cin>>n>>m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
                cin>>a[i][j];
        }
        ll total=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int other1=a[i][m-j-1];
                int other2=a[n-i-1][j];
                vector<int>b;
                b.push_back(a[i][j]);
                b.push_back(other1);
                b.push_back(other2);
                sort(b.begin(),b.end());
                a[i][j]=a[i][m-j-1]=a[n-i-1][j]=b[1];
                total+=(ll)(b[2]-b[1])+(b[1]-b[0]);
            }
        }
        cout<<(total)<<"\n";
    }
 
 
 
    return ghost;
}