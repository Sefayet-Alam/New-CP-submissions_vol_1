#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
 
    ll v[4];
    cin>>v[0]>>v[1]>>v[2]>>v[3];
    sort(v,v+4);
    ll g=v[3]-v[2];
    ll h=v[3]-v[1];
    ll m=v[3]-v[0];
 
    cout<<g<<" "<<h<<" "<<m<<endl;
}