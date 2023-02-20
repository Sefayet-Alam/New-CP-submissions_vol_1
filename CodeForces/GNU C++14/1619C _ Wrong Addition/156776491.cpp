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
        string a,s;
        cin>>a>>s;
        ll len_a=(ll) a.size();
        ll len_s=(ll) s.size();
 
        ll idx_a=len_a-1,idx_s=len_s -1;
        string b;
        bool done=true;
        while(idx_a>=0 && idx_s>=0)
        {
            ll val_a=a[idx_a]-'0';
            ll val_s=s[idx_s]-'0';
            if(val_a<=val_s)
            {
                ll diff=val_s-val_a;
                b.push_back((char)('0'+diff));
                idx_a--,idx_s--;
            }
            else{
                idx_s--;
                val_s+=10*((ll)(s[idx_s]-'0'));
                ll diff=val_s-val_a;
                if(diff>9 || diff<0){
                    done=false;
                    break;
                }
               b.push_back((char)('0'+diff));
               idx_a--;
               idx_s--;
 
            }
        }
        if(!done){
            cout<<-1<<endl;
            continue;
        }
        if(idx_a>=0){
            done=false;
        }
         if(!done){
            cout<<-1<<endl;
            continue;
        }
        while(idx_s>=0){
            b.push_back(s[idx_s--]);
        }
        while(b.back()=='0'){
            b.pop_back();
        }
        reverse(b.begin(),b.end());
        cout<<b<<endl;
    }
 
    return ghost;
}