#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
 
 
 
 
int main(){
 ios::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 ll i,j,k,t;
 cin>>t;
 for(i=0;i<t;i++)
    {
        ll n;
        cin>>n;
        if(n%7==0) cout<<n<<endl;
        else{
            ll m=n/7;
            ll r=7*(m+1);
            ll h=n/10;
            if(r>=h*10 && r<(h+1)*10) {cout<<r<<endl;}
            else {cout<<m*7<<endl;}
 
        }
    }
    return 0;
}
 