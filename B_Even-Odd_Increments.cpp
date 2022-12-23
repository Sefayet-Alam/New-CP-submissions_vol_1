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
        ll n,q;
        cin>>n>>q;
        vector<ll>vec(n);
        ll nodd=0,nev=0,sumodd=0,sumev=0;
        for(ll i=0;i<n;i++){
            cin>>vec[i];
            if((vec[i])&1){
                nodd++;
                sumodd+=vec[i];
            }
            else{
                nev++;
                sumev+=vec[i];
            }
        }
            ll x,r;
            ll ans=0;
            ans=sumodd+sumev;
            //cout<<sumodd<<" "<<sumev<<" "<<ans<<endl;
            vector<ll>answer;
            while(q--){
                cin>>r>>x;
                //cout<<r<<x<<endl;
                if(r){
                    ans+=nodd*x;
                    if((x%2)){
                        nev=n;
                        nodd=0;
                    }
                   
                }
                else{
                    ans+=nev*x;
                    if((x%2)){
                        nodd=n;
                        nev=0;
                    }
                }
              cout<<ans<<endl;
            }   
           
            //cout<<endl;

        }
    


    return 0;
}

