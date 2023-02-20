#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vl = vector<ll>;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
       string s;
       cin>>s;
       ll k1=0,k2=0,k3=0;
       for(int i=0;i<s.size();i++)
       {
           if(s[i]=='r') k1=1;
           if(s[i]=='g') k2=1;
           if(s[i]=='b') k3=1;
           if(s[i]=='R' && k1==0) {cout<<"NO"<<endl; return;}
           if(s[i]=='G' && k2==0) {cout<<"NO"<<endl; return;}
           if(s[i]=='B' && k3==0) {cout<<"NO"<<endl; return;}
 
       }
       cout<<"YES"<<endl;
}
 
int main()
{
    fast;
    int t;
    cin>>t;
   while(t--)
   {
       solve();
 
   }
    return 0;
}