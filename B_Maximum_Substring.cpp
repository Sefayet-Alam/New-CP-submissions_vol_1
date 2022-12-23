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
        string s;
        cin>>s;
        ll z=0,on=0;
       
        for(ll i=0;i<n;i++){
            if(s[i]=='0') z++;
            else on++;
        }

        ll lenz=0;
         ll maxz=0;

        for(ll i=0;i<n;i++){
            
            if(s[i]=='0') {lenz++; maxz=max(maxz,lenz);}
            else{
               
                lenz=0;
            }
            // cout<<i<<" "<<lenz<<" "<<maxz<<endl;
        }
       // cout<<endl;
        ll maxon=0;
        ll lenon=0;
        for(ll i=0;i<n;i++){
           
            if(s[i]=='1'){lenon++; maxon=max(maxon,lenon);}
            else{
               
                lenon=0;
            }
            // cout<<i<<" "<<lenon<<" "<<maxon<<endl;
        }
       // cout<<maxon<<" "<<maxz<<endl;
        ll typ1=z*on;
        ll typ2=maxz*maxz;
        ll typ3=maxon*maxon;
        cout<<max(typ1,max(typ2,typ3))<<endl;
    }


    return 0;
}
