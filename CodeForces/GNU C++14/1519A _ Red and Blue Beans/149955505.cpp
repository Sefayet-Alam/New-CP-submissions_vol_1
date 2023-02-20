#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
const int M = 1e9+7;
 
 
void solve(int r,int b,int d){
 
    if(abs(r-b)<=d){
        cout<<"YES"<<"\n";
        return;
    }
    if(r>b) {solve(b,r,d); return;}
    if(r*(d+1LL)<b){
        cout<<"NO"<<"\n";
    }
    else{
        cout<<"YES"<<"\n";
}
}
int main()
{
    ios::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);
 
            int t=1;
            cin>>t;
 
    for(int i=1;i<=t;i++){
     ll r,b,d;
     cin>>r>>b>>d;
     solve(r,b,d);
    }
    return 0;
}