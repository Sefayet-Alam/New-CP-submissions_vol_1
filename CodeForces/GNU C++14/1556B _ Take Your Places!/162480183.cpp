#include<bits/stdc++.h>
#include<stdio.h>
 
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl              "\n"
#define pb                  push_back
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define debug               printf("I am here\n")
 
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
using namespace std;
 
const ll md = 1000000007;
void setIO(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}
const int N = 1e5 + 5;
ll n;
int arr[N];
int fun(int x)
{
 int ans = 0;
 int delta = 0;
 for(int i = 1; i <= n; i++)
 {
  if(arr[i] != x)
   delta += (x - arr[i]);
  ans += abs(delta);
  x ^= 1;
 }
 return ans;
}
int main()
{
    fast;
 
     ll t;
     //ll tno=1;;
     //t=1;
     cin>>t;
    while(t--){
        cin >> n;
  int f[2];
        f[0]=0;f[1]=0;
  for(int i = 1; i <= n; i++)
  {
   cin >> arr[i];
   arr[i] = arr[i] % 2;
   f[arr[i]]++;
  }
  if(n % 2 == 0)
  {
   if(f[0] == f[1])
   {
    int ans = min(fun(0), fun(1));
    cout << ans << endl;
   }
   else
    cout << -1 << endl;
  }
  else
  {
   if(f[0] == f[1] + 1)
    cout << fun(0) << endl;
   else if(f[1] == f[0] + 1)
    cout << fun(1) << endl;
   else
    cout << -1 << endl;
  }
    }
    return 0;
}
 