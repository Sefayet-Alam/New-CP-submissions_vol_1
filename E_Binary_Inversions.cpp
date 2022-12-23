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
        vector<ll>vec(n);
        bool f=0;
        for(ll i=0;i<n;i++){
            cin>>vec[i];
        }

        
      
       vector<ll>pref3(n+1);

        pref3[n]=0;
        for(ll i=n-1;i>=0;i--){
            if(vec[i]==0){
                pref3[i]=pref3[i+1]+1;
            }
            else{
                pref3[i]=pref3[i+1];
            }
        }
        ll ans3=0;

        for(ll i=0;i<n;i++){
            if(vec[i]==1) ans3+=pref3[i];
        }

        vector<ll>res(n);
        res=vec;
        bool g=0;
        for(ll i=n-1;i>=0;i--){
           
            if(g==0 && res[i]==1){
                res[i]=0;
                g=1;
            }
        }
        if(g==0) res[0]=1;

        for(ll i=0;i<n;i++){
           
            if(f==0 && vec[i]==0){
                vec[i]=1;
                f=1;
            }
        }
        if(f==0) vec[n-1]=0;

        vector<ll>pref(n+1);
        pref[n]=0;
        for(ll i=n-1;i>=0;i--){
            if(vec[i]==0){
                pref[i]=pref[i+1]+1;
            }
            else{
                pref[i]=pref[i+1];
            }
        }
        ll ans=0;
        for(ll i=0;i<n;i++){
            if(vec[i]==1) ans+=pref[i];
        }
        //cout<<ans<<endl;

       vector<ll>pref2(n+1);

        pref2[n]=0;
        for(ll i=n-1;i>=0;i--){
            if(res[i]==0){
                pref2[i]=pref2[i+1]+1;
            }
            else{
                pref2[i]=pref2[i+1];
            }
        }
        ll ans2=0;
        for(ll i=0;i<n;i++){
            if(res[i]==1) ans2+=pref2[i];
        }
       //cout<<ans<<" "<<ans2<<" "<<ans3<<endl;
        cout<<max(ans,max(ans3,ans2))<<endl;
    }


    return 0;
}
