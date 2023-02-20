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
 
char in[maxN],out[maxN];
 
ll stop(ll w1,ll w2,ll rem1,ll rem2)
{
    if(w1>w2+rem2 ||w2>w1+rem1){
        return 1;
    }
    else{
        return 0;
    }
}
 
ll m1(string s){
    ll w1=0,w2=0,rem1=5,rem2=5;
    int ans=0;
    for(ll i=0;i<10;i++)
    {
        if(stop(w1,w2,rem1,rem2)){return ans;}
        if(s[i]=='1' || s[i]=='?'){w1++;rem1--;}
        else if(s[i]=='0'){rem1--;}
        ans++;
        i++;
        if(stop(w1,w2,rem1,rem2)){return ans;}
        if(s[i]=='1'){w2++;rem2--;}
        else if(s[i]=='0'|| s[i]=='?'){rem2--;}
        ans++;
    }
    return 10;
 
}
ll m2(string s){
    ll w1=0,w2=0,rem1=5,rem2=5;
    int ans=0;
    for(ll i=0;i<10;i++)
    {
        if(stop(w1,w2,rem1,rem2)){return ans;}
        if(s[i]=='1' ){w1++;rem1--;}
        else if(s[i]=='0' || s[i]=='?'){rem1--;}
        ans++;
        i++;
        if(stop(w1,w2,rem1,rem2)){return ans;}
        if(s[i]=='1' || s[i]=='?'){w2++;rem2--;}
        else if(s[i]=='0'){rem2--;}
        ans++;
    }
    return 10;
 
}
int main()
{
    fast;
    //setIO();
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<min(m1(s),m2(s))<<endl;
    }
 
    return 0;
}