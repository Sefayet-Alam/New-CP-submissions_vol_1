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



int main()
{
    fast;
     ll t;

     //ll tno=1;;
     //t=1;
    cin>>t;

    while(t--){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<char> v;
    for(ll i=n-1;i>=0;i--){
        if(s[i]=='0'){
            i--;
            ll d=s[i]-'0';
            i--;
            d+=(s[i]-'0')*10;
            char cr=(char)(d+'a'-1);
            //cout<<cr<<endl;
           v.push_back(cr);
        }
        else{
           // char ch=char(s[i]-'1'+'a');
            //cout<<(char)(s[i]-'1'+'a')<<endl;
            v.push_back((char)(s[i]-'1'+'a'));
        }
    }
    for(ll i=v.size()-1;i>=0;i--){
    cout<<v[i];
    }
    cout<<endl;
    }


    return 0;
}

