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
        ll tot=0;
        vector<ll>a(n),b(n);
        vector<ll> c,d;
        for(ll i=0;i<n;i++){
            cin>>a[i];
           
        }

        for(ll i=0;i<n;i++){
            cin>>b[i];
            if(a[i]==0){c.push_back(b[i]);}
            else{d.push_back(b[i]);}
        }
        sort(c.begin(),c.end());
        sort(d.begin(),d.end());
         if(c.size()==0){
            for(ll i=0;i<d.size();i++){
                tot+=d[i];
            }
         }
         else if(d.size()==0){
            for(ll i=0;i<c.size();i++){
                tot+=c[i];
            }
         }
       else if(c.size()>d.size()){
        ll k=c.size(),r=d.size();
       
       for(ll i=0;i<k-r;i++){
        tot+=c[i];
       }
       ll idx1=r-1,idx2=k-r;
       for(ll i=k-1;i>=k-r;i--){
        tot+=2*(c[i]+d[idx1--]);
       }

       }
       else if(c.size()==d.size()){
        ll k=c.size(),r=d.size();
        if(k==1){tot+=c[0]+d[0];}
        else{
        if(c[0]>d[0]){tot+=2*c[0]+d[0];}
        else{tot+=2*d[0]+c[0];}
        for(ll j=1;j<k;j++){
            tot+=2*(c[j]+d[j]);
        }
        }
       }
       else if(d.size()>c.size()){
       ll k=c.size(),r=d.size();
       
       for(ll i=0;i<r-k;i++){
        tot+=d[i];
       }
       ll idx1=k-1,idx2=r-k;
       for(ll i=r-1;i>=r-k;i--){
        tot+=2*(d[i]+c[idx1--]);
       }
       }
       cout<<tot<<endl;
    }


    return 0;
}

