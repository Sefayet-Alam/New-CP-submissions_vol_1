#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
int main()
{
 ios::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 ll i,j,t;
 cin>>t;
 for(i=0;i<t;i++)
    {
        string s;
        cin>>s;
        vector< pair<int,int> >a;
        ll m=0,n=0;
        ll h=s.size();
        for(j=0;j<h;++j)
        {
            if (s[j]=='0') ++n;
            else ++m;
            a.push_back({m,n});
        }
 
       for(j=h-1;j>=0;--j)
       {
           if(a[j].first==a[j].second) continue;
           else{
            cout<<min(a[j].first,a[j].second)<<endl;
            break;
           }
       }
 
        a.clear();
    }
    return 0;
}