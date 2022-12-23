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

string decimalToBinary(int n)
{
    string s = bitset<64> (n).to_string();
     
    const auto loc1 = s.find('1');
     
    if(loc1 != string::npos)
        return s.substr(loc1);
     
    return "0";
}
 
string compare(string s1,string s2){

    ll n=s1.size();
    ll a=0,b=0;
    for(ll i=0;i<n;i++){
        if(s1[i]=='1' && s2[i]=='0') return s1;
        if(s2[i]=='1' && s1[i]=='0') return s2;
    }
    return s2;

} 
int main()
{
    fast;
     ll t;
    //setIO();
     //ll tno=1;;
    t=1;
    //cin>>t;

    while(t--){
        ll n;
        cin>>n;
        string  s;
        cin>>s;
        ll numoz=0;
       
        for(ll i=0;i<n;i++){
            if(s[i]=='0') numoz++;
        }
        ll pos=n;
        bool q=0;
        for(ll i=0;i<n;i++){
            if(s[i]=='1') q=1;
          if(s[i]=='0' && q){
                pos=i;
                break;
            }
        }

        if(numoz==n){cout<<0<<endl;}
        else if(n==1){cout<<s<<endl;}
        else if(pos==n){
            cout<<1<<endl;
        }
        else{
            
      ll len=n-pos;
      
    
      ll an=0;
      string sr(n,'0');
      string final=sr;
      for(ll i=0;i<pos;i++){
        if(s[i]=='0') continue;
         string kr=s;
        string p=s.substr(i,len);
       
        ll b=0;
       // cout<<p<<endl;
       
        for(ll i=pos;i<n;i++){
            kr[i]=(char)(max(s[i],p[b]));
            b++;
        }
       // cout<<sr<<" "<<kr<<endl;
       sr=compare(sr,kr);
      
      }
     bool f=0;
     for(ll i=0;i<sr.size();i++){
        if(sr[i]=='1') f=1;
        if(f) cout<<sr[i];
     }
     cout<<endl;
     }
    
    }


    return 0;
}

