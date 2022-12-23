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
        ll r1,r2,c1,c2,r3,c3;
        ll odcol=0,evcol=0,odrow=0,evrow=0;
       vector<ll>vecr(3),vecc(3);
       map<ll,ll>cnt,ct;
       for(ll i=0;i<3;i++){
        cin>>vecr[i]>>vecc[i];
        if(vecr[i]&1) odrow++;
        else evrow++;

        if(vecc[i]&1) odcol++;
        else evcol++;

        
       }
       r1=vecr[0];
       c1=vecc[0];
       r2=vecr[1];
       c2=vecc[1];
       r3=vecr[2];
       c3=vecc[2];

    ll r,c;
    cnt[r1]++;
    cnt[r2]++;
    cnt[r3]++;
    ct[c1]++;
    ct[c2]++;
    ct[c3]++;

    if(cnt[r1] == 2) r = r1;
    if(cnt[r2] == 2) r = r2;
    if(ct[c1] == 2) c = c1;
    if(ct[c2] == 2) c = c2;
    ll x,y;
    cin>>x>>y;
     bool f=0;
    //  for(auto it:cnt){
    //     cout<<it.first<<" "<<it.second<<endl;
    //  }
    if((r == 1 && c == 1) || (r == 1 && c == n) || (r == n && c == 1) || (r == n && c == n)) {
            if(x == r || y == c){
             f=1;
            }
          
        }
    else{
    // cout<<5<<endl;
       if(odrow==2){
        if(x&1) f=1;
        else if(odcol==2 && y&1) f=1;
        else if(evcol==2 && y%2==0) f=1;
       }
       else if(evrow==2){
         if(x%2==0) f=1;
        else if(odcol==2 && y&1) f=1;
        else if(evcol==2 && y%2==0) f=1;

        }
       
       
       }
       if(f) cout<<"YES"<<endl;
       else cout<<"NO"<<endl; 

    }


    return 0;
}

