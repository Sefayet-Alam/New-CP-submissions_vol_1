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
    //fast;
     ll t;
    //setIO();
     //ll tno=1;;
     //t=1;
   ll n;
   cin>>n;
   vector<pair<string,string> >vec;
   getchar();
   while(n--){
    string s1,s2;
    
    getline(cin,s1);

    getline(cin,s2);

    //cout<<s1<<endl<<s2<<endl;

    vec.push_back({s1,s2});
    
   }
   ll q;
   cin>>q;
   getchar();
   string s;
   while(q--){
    getline(cin,s);
   
   for(auto it:vec){
    if(it.first==s){cout<<it.second<<endl;break;}
    else if(it.second==s){cout<<it.first<<endl;break;}
   }
   }

    return 0;
}
