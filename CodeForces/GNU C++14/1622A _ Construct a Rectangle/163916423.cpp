#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, c;
        cin>>a>>b>>c;
        if(a==b && c%2==0){ cout<<"YES\n"; }
        else if(b==c && a%2==0){ cout<<"YES\n"; }
        else if(a==c && b%2==0){ cout<<"YES\n"; }
        else
        {
            vector<int>vec;
            vec.push_back(a); vec.push_back(b); vec.push_back(c);
            sort(vec.rbegin(),vec.rend());
            if(vec[0]==(vec[1]+vec[2])){ cout<<"YES\n"; }
            else{ cout<<"NO\n"; }
        }
    }
    return 0;
}