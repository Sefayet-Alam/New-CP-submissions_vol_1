#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
 
   ll k,r;
   cin>>k>>r;
 
   ll i,j,m=0;
   for(i=1;i<100000;i++)
   {
 
       if(k*i%10==0 || (k*i-r)%10==0) break;
   }
   cout<<i<<endl;
}