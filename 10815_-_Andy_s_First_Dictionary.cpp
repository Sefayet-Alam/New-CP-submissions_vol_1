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
    string s;
    set<string>st;
    while(cin>>s){
       // if(s=="0") break;
        string newword="";
        ll siz=s.size();
        for(ll i=0;i<siz;i++){
            if((s[i]>='A' && s[i]<='Z')){
                newword.push_back(tolower(s[i]));
            }
            else if(s[i]>='a' && s[i]<='z'){
                 newword.push_back(s[i]);
            }
            else if (newword!="")
            {
                st.insert(newword);
                newword= "";
            }
        }
       if(newword!="") st.insert(newword);

    }
    for(auto it:st){
        cout<<it<<endl;
    }


    return 0;
}

