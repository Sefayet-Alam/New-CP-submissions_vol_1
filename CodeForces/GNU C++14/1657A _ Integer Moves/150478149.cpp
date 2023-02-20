#include<bits/stdc++.h>
#define ll  long long
using namespace std;
 
 
bool checkperfectsquare(ll n)
{
 
    if (ceil((double)sqrt(n)) == floor((double)sqrt(n))) {
        return true;
    }
    else {
      return false;
    }
}
 
 
 
 
 
 
 
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,y;
        cin>>x>>y;
        if(x==0 && y==0) cout<<0<<endl;
        else if(checkperfectsquare(x*x+y*y)) cout<<1<<endl;
        else cout<<2<<endl;
    }
 
 
 
    return 0;
}