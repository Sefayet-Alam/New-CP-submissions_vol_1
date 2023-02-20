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
ll n,m;
bool isValid(ll i,ll j){
 if(i<0 || j<0 || i>=n || j>=m) return false;
 return true;
}
 
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
 
        cin>>n>>m;
        vector<string> v(n);
        string s;
        bool flag=false;
        for(ll i=0;i<n;i++){
            cin>>s;
            v[i]=s;
        }
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                if(v[i][j]=='1'){
                    if(isValid(i-1,j) && v[i-1][j]=='1' && isValid(i,j-1) && v[i][j-1]=='1' && v[i-1][j-1]=='0'){
                        flag=true;
                        break;
                    }
                    if(isValid(i+1,j) && v[i+1][j]=='1' && isValid(i,j-1) && v[i][j-1]=='1' && v[i+1][j-1]=='0'){
                        flag=true;
                        break;
                    }
                    if(isValid(i-1,j) && v[i-1][j]=='1' && isValid(i,j+1) && v[i][j+1]=='1' && v[i-1][j+1]=='0'){
                        flag=true;
                        break;
                    }
                    if(isValid(i+1,j) && v[i+1][j]=='1' && isValid(i,j+1) && v[i][j+1]=='1' && v[i+1][j+1]=='0'){
                        flag=true;
                        break;
                    }
                }
 
            }
              if(flag) break;
        }
        if(flag) {cout<<"NO"<<endl;}
        else{cout<<"YES"<<endl;}
 
    }
 
 
 
    return ghost;
}