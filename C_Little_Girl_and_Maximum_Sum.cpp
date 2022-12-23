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
        ll n,q;
        cin>>n>>q;
        vector<ll>vec(n+1),pos(n+1,0),ans(n+1);
        for(ll i=1;i<=n;i++){
            cin>>vec[i];
        }
         ll l,r;
         ll g=q;
         vector<ll>recl,rec;
        while(g--){
           
            cin>>l>>r;
            recl.push_back(l);
            rec.push_back(r);
            pos[l-1]--;
            pos[r]++;

        }
        vector<pair<ll,ll> >position;
        position.push_back({pos[n],n});
        for(ll i=n-1;i>=0;i--){
            pos[i]+=pos[i+1];
            position.push_back({pos[i],i});
        }
        sort(position.rbegin(),position.rend());
        sort(vec.begin(),vec.end());
        ll k=n;
        for(auto it:position){
            //cout<<it.first<<" "<<it.second<<endl;
            ans[it.second]=vec[k];
            k--;
        }

        // for(auto it:ans){
        //    cout<<it<<" ";
        //  }

        vector<ll>presum(n+1);
        presum[1]=ans[1];
        for(ll i=2;i<=n;i++){
            presum[i]=presum[i-1]+ans[i];
        }
        ll tot=0;
       for(ll i=0;i<q;i++){
        tot+=presum[rec[i]]-presum[recl[i]-1];
       }      
       cout<<tot<<endl;

}


    return 0;
}

