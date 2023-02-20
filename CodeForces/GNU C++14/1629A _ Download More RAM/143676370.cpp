#include<bits/stdc++.h>
 
#define ll long long
using namespace std;
 
 
int main()
{
        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        ll t;
        cin>>t;
        int i,j,k;
        for(i=0;i<t;i++)
        {
            ll n,k;
            cin>>n>>k;
            vector <pair<ll,ll> >v;
            ll a[n],b[n];
            for(j=0;j<n;j++)
            {
                cin>>a[j];
            }
             for(j=0;j<n;j++)
            {
                cin>>b[j];
            }
            for(j=0;j<n;j++)
            {
                v.push_back(make_pair(a[j],b[j]));
 
            }
            sort(v.begin(),v.end());
            for(j=0;j<n;j++)
            {
              if(v[j].first <= k) {k=k+v[j].second;}
            }
            cout<<k<<endl;
 
        }
 
}