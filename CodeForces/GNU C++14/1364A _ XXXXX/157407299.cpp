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
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}
map<string,string> mp;
ll pow1(ll n, ll p)
{
    if (p == 0)
        return 1;
    ll x = pow1(n, p / 2);
    x = (x * x) % md;
    if (p % 2 == 0)
        return x;
    else
        return (x * n) % md;
}
 
 
char in[maxN],out[maxN];
int main()
{
    fast;
    //setIO();
   int t,n,x,a[100001];
    cin>>t;
    while(t--)
    {
        int M,m1,m2;
        ll sum = 0,sum1 = 0,sum2 = 0;
        cin>>n>>x;
        for(int i=0; i<n; i++){
            cin>>a[i];
            sum += a[i];
        }
        if(sum % x != 0){
            cout<<n<<endl;
        }
        else{
            m1 = m2 = n;
            sum1 = sum2 = sum;
            for(int i=n-1; i>=0; i--){
                if((sum1 - a[i])% x != 0 ){
                    m1--;
                    sum1 -= a[i];
                    break;
                }
                else{
                    sum1 -= a[i];
                    m1--;
                }
            }
            for(int i=0; i<n; i++){
                if((sum2 - a[i]) % x != 0){
                    m2--;
                    sum2 -= a[i];
                    break;
                }
                else{
                    sum2 -= a[i];
                    m2--;
                }
            }
            M = max(m1,m2);
            sum = max(sum1,sum2);
            if(sum % x != 0){
                cout<<M<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
 
    }
 
 
    return ghost;
}