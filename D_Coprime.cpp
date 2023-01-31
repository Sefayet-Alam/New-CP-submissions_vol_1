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
const ll maxN=2e6;
#define M 10000

void setIO(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE

}
// vector<bool> Primes(maxN,1);
// vector<ll>primenos;
ll divs[1002][1002];
// void SieveOfEratosthenes(ll n)
// {
//     Primes[1]=0;
//     for (ll i=2;i*i<=n;i++) {
//     if(Primes[i]==1){     
//     for(ll j=i*i;j<=n;j+=i)
//         Primes[j]=0;
//         }
//     }
//     for(ll i=1;i<=n;i++){
//         if(Primes[i]){
//             primenos.push_back(i);
//         }
//     }
// }


int main()
{
    fast;
     ll t;
    //setIO();
     //ll tno=1;;
     //t=1;
    cin>>t;
    //SieveOfEratosthenes(1007);
    memset(divs,0,sizeof(divs));
    for(ll i=1;i<1001;i++){
        for(ll j=i+1;j<1001;j++){
            if(__gcd(i,j)==1){
                divs[i][j]=1;
            }
            else divs[i][j]=0;
        }
    }
    divs[1][1]=1;
    // for(auto it:primenos){
    //     cout<<it<<" ";

    // }
    // cout<<endl;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>vec(n);
        vector<ll> vis(1001,0);
        for(ll i=0;i<n;i++){
            cin>>vec[i];
            vis[vec[i]]=i+1;
        }
       
        ll maxm=-1;
        //vector<pair<ll,ll> >ans;
        for(ll i=0;i<1001;i++){
            for(ll j=i;j<1001;j++){
                if((divs[i][j] || divs[j][i]) && vis[i] && vis[j]){
                   
                   maxm=max(maxm,vis[i]+vis[j]);
                }
            }
        }
        // for(auto it:ans){
        //     cout<<it.first<<" "<<it.second<<endl;
        // }
        if(maxm==-1){cout<<-1<<endl;}
        else{
        
            cout<<maxm<<endl;
        }


      
    }


    return 0;
}

