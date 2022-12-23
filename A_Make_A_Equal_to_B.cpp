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
        vector<ll> a(n),b(n);
        ll numaz=0,numbz=0,numao=0,numbo=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(a[i]) numao++;
            else numaz++;
        }
        for(ll i=0;i<n;i++){
            cin>>b[i];
            if(b[i]) numbo++;
            else numbz++;
        }
        if(a==b) cout<<0<<endl;
        else if(numao==numbo) cout<<1<<endl;
        else{
            vector<ll>x(n);
          
            ll cnt=0;
            for(ll i=0;i<n;i++){
                if(b[i]){
                    if(numao){numao--;
                    x[i]=1;
                    }
                    else {x[i]=0;cnt++;}
                }
                else{
                     if(numaz){numaz--;
                    x[i]=0;
                    }
                    else {x[i]=1;cnt++;}
                }
            }
         ll mismatch=0;
         for(ll i=0;i<n;i++){
            if(a[i]!=b[i]) mismatch++;
         }
         if(cnt!=mismatch) cnt++;

            cout<<cnt<<endl;
        }


    }


    return 0;
}