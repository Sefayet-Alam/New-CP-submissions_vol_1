#include<bits/stdc++.h>

using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	            "\n"
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
        vector<ll>vec(n);
         vector<ll> cnt(102,0),vis(102,0);
        for(ll i=0;i<n;i++){
            cin>>vec[i];
            cnt[vec[i]]++;
            vis[vec[i]]=1;
        }
       
        
       sort(vec.begin(),vec.end());
       ll maxm=vec[n-1];
       
        ll ans=0;
    for(ll i=0;i<=maxm;i++){
         if(i) cnt[i]+=cnt[i-1];
    }
    // for(ll i=0;i<=maxm;i++){
    //    cout<<i<<" "<<cnt[i]<<endl;
    // }
     ll c=0;
     for(ll i=maxm;i>=0;i--){
     ll diffno=0;
     for(ll j=i;j>=0;j--){
        if(vis[j]==1 && cnt[j]){
            // cout<<j<<": "<<vis[i]<<"->";
            diffno++;
            }
        else if(cnt[j-1] && j){
          diffno++;
          for(ll k=j-1;k>=0;k--){
            bool q=0;
            if(cnt[k]) {cnt[k]--;
            q=1;}
            if(cnt[k]==0 && q==1) break;
          }
        }
     }
    //cout<<endl;
     if(diffno>=(i+1)/2){
       //cout<<i<<" "<<diffno<<endl;
        ans=i;
        break;
     }
    }
    cout<<ans<<endl;

    
    }


    return 0;
}
