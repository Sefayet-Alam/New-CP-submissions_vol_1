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
 
void solve(){
    int a,b;
    cin>>a>>b;
    int c=0;
    string s;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='0') a--;
        if(s[i]=='1') b--;
        if(s[i]=='?') c++;
    }
    // cout<<"in "<<a<<" "<<b<<"\n";
    if(c==0){
        for(int i=0;i<n/2;i++){
            if(s[i]!=s[n-1-i]){
                cout<<-1<<"\n";
                return;
            }
        }
        if(a>0 || b>0){
            cout<<-1<<"\n";
            return;
        }
        cout<<s<<"\n";
        return;
    }
    for(int i=0;i<n/2;i++){
        if(s[i]=='?' && s[n-i-1]!='?'){
            if(s[n-i-1]=='0' && a>0){
                s[i]='0';
                a--;
            }
            else if(s[n-i-1]=='0' && a==0){
                cout<<-1<<"\n";
                return;
            }
            else if(s[n-i-1]=='1' && b>0){
                s[i]='1';
                b--;
            }
            else{
                cout<<-1<<"\n";
                return;
            }
        }
        else if(s[n-i-1]=='?' && s[i]!='?'){
            if(s[i]=='0' && a>0){
                s[n-i-1]='0';
                a--;
            }
            else if(s[i]=='0' && a==0){
                cout<<-1<<"\n";
                return;
            }
            else if(s[i]=='1' && b>0){
                s[n-i-1]='1';
                b--;
            }
            else{
                cout<<-1<<"\n";
                return;
            }
        }
    }
    for(int i=0;i<n/2;i++){
        if(s[i]=='?' && s[n-i-1]=='?'){
            if(a>=2) s[i]='0' , s[n-i-1]='0' , a-=2;
            else if(b>=2) s[i]='1' , s[n-i-1]='1' , b-=2;
            else{
                cout<<-1<<"\n";
                return;
            }
        }
    }
    if(n%2==1 && s[n/2]=='?'){
        if(a>0) s[n/2]='0', a--;
        else if(b>0) s[n/2]='1' , b--;
        else{
            cout<<-1<<"\n";
            return;
        }
    }
    if(a>0 || b>0){
        cout<<-1<<"\n";
        return;
    }
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-1-i]){
            cout<<-1<<"\n";
            return;
        }
    }
    cout<<s<<"\n";
    return;
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
 
    solve();
    }
 
    return ghost;
}