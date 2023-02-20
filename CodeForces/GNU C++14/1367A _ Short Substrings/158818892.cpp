#include <bits/stdc++.h>
#define ll long long
#define ghost 0
#define PI 3.1415926535897932385
#define INF 1000111222
#define eps 1e-7
#define maxN 1011
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
 
const ll md = 1e9+7;
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
bool isprime(ll x){
 
    if (x <= 1)
        return false;
    for(ll i=2;i*i<=x;i++)
        if (x%i==0)
            return false;
 
    return true;
}
bool isPowerOfTwo(int n)
{
   if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
}
vector<int>v[1001];
vector<int>divisors[33];
vector<int>ans;
 
void sieve(){
    for(ll i=1;i<=1000;i++)
    {
        for(ll j=1;j*j<=i;j++)
        {
            if(i%j==0)
            {
                if(i/j==j) v[i].push_back(j);
                else{v[i].push_back(j);v[i].push_back(i/j);}
            }
        }
    }
    for(ll i=1;i<=32;i++)
    {
        for(ll j=1;j<=1000;j++)
        {
 
            if(i==(ll)v[j].size()){divisors[i].push_back(j);}
        }
    }
    for(int i=1;i<=32;i++)
    {
        for(ll j=(ll)divisors[i].size()-1;j>=0;j--)
        {
            ans.push_back(divisors[i][j]);
        }
    }
}
 
char in[maxN],out[maxN];
int main()
{
 
    fast;
    //setIO();
    ll t;
   cin>>t;
   ll tno=1;
 
    while(t--)
    {
 
        string s,t;
        cin>>s;
        int len = s.length();
        for(int i=0; i<len-1; i++){
            if(i == 0){
                t +=s[i];
            }
            if(s[i] == s[i-1]){
                t +=s[i];
                i++;
            }
        }
        t +=s[len-1];
        cout<<t<<endl;
    }
 
 
 
 
    return ghost;
}