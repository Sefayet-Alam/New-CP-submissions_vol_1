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
    //setIO();
    ll t;
    cin>>t;
    while(t--){
             int n;
            cin>>n;
            vector<int>a(n);
            map<int,vector<int>>mp;
            for(int i=0;i<n;i++){
                int x;
                cin>>x;
                mp[x].push_back(i);
            }
            if(n==1){
                cout<<0<<"\n";
                continue;
            }
            int len=2e5+2;
            for(auto i : mp){
                int ok=0;
                if((int)i.second.size()==1){
                    if(i.second[0]==0 || i.second[0]==n-1)
                        len=min(len,1);
                    else
                        len=min(len,2);
                    continue;
                }
                for(int j=0;j<(int)i.second.size();j++){
                    if(j==0){
                        if(i.second[j]>=1)
                            ok++;
                        continue;
                    }
                    if(j==(int)i.second.size()-1){
                        if(i.second[j]<(n-1))
                            ok++;
                    }
                    if(i.second[j]-i.second[j-1]>1)
                        ok++;
                }
                len=min(len,ok);
            }
            cout<<len<<"\n";
    }
 
    return ghost;
}