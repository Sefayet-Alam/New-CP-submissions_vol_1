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
    while(t--)
    {
          int n;
                cin>>n;
                vector<ll>e;
                vector<ll>o;
                for(int i=0;i<n;i++){
                    int x;
                    cin>>x;
                    if(x%2==0) e.push_back(x);
                    else o.push_back(x);
                }
                sort(e.rbegin(),e.rend());
                sort(o.rbegin(),o.rend());
                if(o.size()==0){
                    cout<<"Alice"<<"\n";
                    continue;
                }
                if(e.size()==0 && o.size()==1){
                    cout<<"Tie"<<"\n";
                   continue;
                }
                if(e.size()==0 && o.size()>1){
                    cout<<"Bob"<<"\n";
                    continue;
                }
                int i=0,j=0;
                int p=e.size();
                int q=o.size();
                int c=0;
                ll t1=0,t2=0;
                while(i<p && j<q){
                    if(c==0){
                        if(e[i]>=o[j]){
                            t1+=e[i];
                            i++;
                        }
                        else{
                            j++;
                        }
                        c=1;
                    }
                    else{
                        if(e[i]<=o[j]){
                            t2+=o[j];
                            j++;
                        }
                        else{
                            i++;
                        }
                         c=0;
                    }
                }
                // cout<<"in "<<t1<<" "<<t2<<"\n";
                vector<ll>other;
                for(int x=i;x<p;x++)
                    other.push_back(e[x]);
                for(int x=j;x<q;x++)
                    other.push_back(o[x]);
                for(int x=0;x<(int)other.size();x++){
                    if(c==0){
                        if(other[x]%2==0) t1+=other[x];
                        c=1;
                    }
                    else{
                        if(other[x]%2==1) t2+=other[x];
                        c=0;
                    }
                }
                if(t1>t2)cout<<"Alice";
                else if(t1==t2)cout<<"Tie";
                else cout<<"Bob";
                cout<<"\n";
    }
 
    return ghost;
}