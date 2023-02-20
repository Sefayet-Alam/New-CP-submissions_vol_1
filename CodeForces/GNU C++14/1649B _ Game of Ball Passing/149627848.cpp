#include<bits/stdc++.h>
#define ll long long int
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll a[n], i, sum = 0;
 
        for(i = 0; i < n; i++)
        {
            cin >> a[i];
            sum+=a[i];
        }
 
        sort(a, a+n);
 
        sum-=a[n-1];
 
        sum++;
 
        ll ans = a[n-1]- sum;
 
        if(a[n-1] == 0)
            cout<<"0";
        else if(ans >= 0)
            cout<<ans+1;
        else
            cout<<"1";
 
        cout<<endl;
    }
}