#include<bits/stdc++.h>
 
using namespace std;
 
 
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<ll>());
#define pn                  printf("\n")
#define md                  10000007
#define debug               printf("I am here\n")
 
#define l(s)                      s.size()
#define tcas(i,t)             for(ll i=1;i<=t;i++)
#define pcas(i)                printf("Case %lld: ",i)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
#define M 10000
 
void setIO(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
 
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
 
}
 
 
int main()
{
    fast;
     ll t;
    //setIO();
     //ll tno=1;;
     //t=1;
    cin>>t;
 
    while(t--){
      ll n;
      cin>>n;
      string a,b;
      cin>>a>>b;
      //cout<<a<<" "<<b<<endl;
      bool f=0;
      a='a'+a;
      b='a'+b;
      for(ll i=1;i<=n;i++){
        if(a[i]!='1'-b[i]+'0'){
            f=1;
            break;
        }
      }
 
        if(a==b){
            f=0;
        }
        //cout<<f<<endl;
    if(f){
        cout<<"NO"<<endl;
    }
    else{
        vector<ll> cnt(n+1,0);
        vector<pair<ll,ll> >vec;


         if (a[1] != b[1])
        {
            vec.push_back({1, n});
            a = b;
        }
        for(ll i=1;i<=n;i++){
            if (a[i] == '1')
            {
                if (i == 1)
                {
                    vec.push_back({1, n});
                    vec.push_back({2, n});
                }
                else
                {
                    cnt[i]++;
                    cnt[i - 1]++;
                }
            }
        }
      
        for (int i = 1; i <= n; ++i)
        {
            if (cnt[i] % 2 == 1)
            {
                vec.push_back({1, i});
            }
        }
        
      cout<<"YES"<<endl<<vec.size()<<endl;
      for(auto it:vec){
        cout<<it.first<<" "<<it.second<<endl;
      }
 
    
    }
     // cout<<a<<" "<<b<<endl;    
    }
    
 
 
    return 0;
}