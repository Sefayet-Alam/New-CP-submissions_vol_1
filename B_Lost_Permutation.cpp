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
        ll n,s;
        cin>>n>>s;
        vector<ll>vec(n);
        ll sum=0;
        map<ll,ll>freq;
        set<ll>st;
        for(ll i=0;i<n;i++){
            cin>>vec[i];
            freq[vec[i]]++;
            st.insert(vec[i]);
        }
        //ll maxm=-1;
        //ll maxele=*max_element(vec.begin(),vec.end());
        for(ll i=1;i<=100;i++){
        if(freq[i]==0){
            sum+=i;
            st.insert(i);
           
        }
        if(sum==s){
        break;
        }
         }
         ll finder=1;
         bool f=0;
         for(auto it:st){
            if(it!=finder){
                f=1;
                break;
            }
            finder++;
         }
         if(f || sum!=s) cout<<"NO"<<endl;
         else{cout<<"YES"<<endl;
         }


    }


    return 0;
}