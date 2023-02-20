#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    cin>>n;
    string ss, tt;
    cin>>ss>>tt;
    bool f=1;
    int x1=0, x2=0, y1=0, y2=0, z1=0, z2=0;
    deque<int>a1,a2,c1,c2;
    for(int i=0; i<n; i++)
    {
        if(ss[i]=='a'){ x1++; a1.push_back(i); }
        else if(ss[i]=='b'){ y1++; }
        else if(ss[i]=='c'){ z1++; c1.push_back(i); }
        if(tt[i]=='a'){ x2++; a2.push_back(i); }
        else if(tt[i]=='b'){ y2++; }
        else if(tt[i]=='c'){ z2++; c2.push_back(i); }
    }
    if(x1!=x2 || y1!=y2 || z1!=z2){ f=0; }
    else
    {
        int j=0;
        for(int i=0; i<n; i++)
        {
            while(tt[j]=='b'){ j++; }
            if(ss[i]=='a')
            {
                if(ss[i]==tt[j] && a1.front()<=a2.front()){ a1.pop_front(); a2.pop_front(); j++; }
                else{ f=0; break; }
            }
            else if(ss[i]=='c')
            {
                if(ss[i]==tt[j] && c1.front()>=c2.front()){ c1.pop_front(); c2.pop_front(); j++; }
                else{ f=0; break; }
            }
        }
    }
    if(f){ cout<<"YES\n"; }
    else{ cout<<"NO\n"; }
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}