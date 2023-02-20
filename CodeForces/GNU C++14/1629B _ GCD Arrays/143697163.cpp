#include<bits/stdc++.h>
 
#define ll long long
using namespace std;
 
 
int main()
{
        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        ll t;
        cin>>t;
        ll i,j,k;
        for(i=0;i<t;i++)
        {
            ll l,r,k;
            cin>>l>>r>>k;
 
        ll m=r-l+1;
 
        if (l==r && l>1) cout<<"YES\n";
        else if(m%2==0)
        {int x=m/2;
        if(x>k) cout<<"NO\n";
        else cout<<"YES\n";
        }
        else
        {
            if(l%2==0)
            {
                int x=m/2;
                if(x>k) cout<<"NO\n";
                else cout<<"YES\n";
            }
            else
            {
                int x=m/2+1;
                if(x>k) cout<<"NO\n";
                else cout<<"YES\n";
            }
        }
        }
 
}