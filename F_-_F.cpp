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
     t=1;
    //cin>>t;

    while(t--){
        ll n,m;
        cin>>n>>m;
        double d;
        vector< map<string,ll> >mp(n+1);
        vector<string>vec(n+1);
        for(ll i=1;i<=n;i++){
          cin>>vec[i];
         }
        for (int i = 1; i <=n; i++) {
        for (int j = 1; j <= i; j++) {
            mp[i][vec[j]]++;
        }
        }

       
        ll l,r;
       while(m--){
        cin>>l>>r;
        ll k=(r-l+1)/2+1;
        ll maxm=0;
        map<string,ll>freq;
        for(auto x:mp[r]){
            freq[x.first]=x.second;
        }
        for(auto it:mp[l-1]){
            freq[it.first]-=it.second;
        }
         for(auto it:freq){
        //     //cout<<it.first<<"->"<<it.second<<" "<<k<<endl;
             maxm=max(maxm,it.second);
         }
        
        if(maxm>=k){
            cout<<"usable"<<endl;
        }
        else cout<<"unusable"<<endl;
       }

    }


    return 0;
}

