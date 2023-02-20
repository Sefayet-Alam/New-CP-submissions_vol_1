#include <bits/stdc++.h>
#define ll long long
#define ghost 0
#define PI 3.1415926535897932385
#define INF 1000111222
#define eps 1e-7
#define maxN 1011
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
 
const ll md = 1000000007;
void setIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
map<string,string> mp;
 
char in[maxN],out[maxN];
int main()
{
    fast;
    //setIO();
    ll t;
    cin>>t;
    while(t--)
    {
        int n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int mini=2e9;
    int ind=-1;
    sort(a.begin(),a.end());
    for(int i=1;i<n;i++){
        if(abs(a[i]-a[i-1])<mini){
            mini=abs(a[i]-a[i-1]);
            ind=i;
        }
    }
    vector<int>small,big;
    for(int i=0;i<n;i++){
        if(i==ind || i==ind-1) continue;
        if(a[i]>a[ind-1]) big.push_back(a[i]);
    }
    for(int i=0;i<n;i++){
        if(i==ind || i==ind-1) continue;
        if(a[i]<=a[ind]) small.push_back(a[i]);
    }
    cout<<a[ind-1]<<" ";
    for(auto i : big) cout<<i<<" ";
    for(auto i : small) cout<<i<<" ";
    cout<<a[ind]<<" "<<"\n";
 
    }
 
    return 0;
}