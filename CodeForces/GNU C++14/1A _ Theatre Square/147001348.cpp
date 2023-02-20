#include <bits/stdc++.h>
 
 
using namespace std;
 
#define ll long long
const ll mod = 1e9 + 7,inf = 1e18;
 
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
 
int main()
{
    fast;
    long long n;
    long long m;
    long long a;
 
    cin >> n >> m >> a;
 
    cout << ((n + a - 1) / a) * ((m + a - 1) / a) << endl;
 
    return 0;
}
 