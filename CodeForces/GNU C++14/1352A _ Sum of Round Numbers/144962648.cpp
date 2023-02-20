#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll i,j,t;
    cin>>t;
 
    for(i=0;i<t;i++)
    {
      string s;
      cin>>s;
      ll k=0;
      ll h=s.size();
      for(j=0;j<h;j++)
      {
          if(s[j]!='0') k++;
      }
      cout<<k<<endl;
 
      for(j=0;j<h;j++)
      {
          if(s[j]!='0') cout<<(s[j]-'0')*pow(10,h-j-1)<<" ";
      }
      cout<<endl;
    }
}