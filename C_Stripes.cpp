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
        char arr[8][8];
        ll q=0,w=0;
        //getchar();
        for(ll i=0;i<8;i++){
         
            for(ll j=0;j<8;j++){
                cin>>arr[i][j];
              
            }
          
        }
        for(ll i=0;i<8;i++){
           ll cnt=0;
            for(ll j=0;j<8;j++){
        
                if(arr[i][j]=='R') cnt++; 
            }
            if(cnt==8) q=1;
        }
        for(ll i=0;i<8;i++){
            ll cnt2=0;
            for(ll j=0;j<8;j++){
              //cout<<arr[j][i];
               if(arr[j][i]=='B') {cnt2++;}
            }
            //cout<<endl;
            if(cnt2==8) w=1;
        }
        if(q) cout<<"R"<<endl;
        else if(w) cout<<"B"<<endl;
        else cout<<endl;
    }


    return 0;
}

