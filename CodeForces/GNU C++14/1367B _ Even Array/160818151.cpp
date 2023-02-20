#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fast;
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n, oc=0, ec=0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(i%2==arr[i]%2){ continue; }
            else if(arr[i]%2){ oc++; }
            else{ ec++; }
        }
        if(oc==ec){ cout<<oc<<"\n"; }
        else{ cout<<"-1\n"; }
    }
    return 0;
}