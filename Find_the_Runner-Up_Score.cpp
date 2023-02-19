#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    
     ll t;
    //setIO();
     //ll tno=1;;
     t=1;
    //cin>>t;

    while(t--){
        set<ll>st;
        ll n;
        cin>>n;
        ll x;
        for(ll i=0;i<n;i++){
            cin>>x;
            st.insert(x);
        }
        auto it=st.end();
        it--;
        it--;
        cout<<*it<<endl;
    }


    return 0;
}
