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
    string p;
    getline(cin,p);
    while(t--){
        string s;
     
        getline(cin,s);
        //cout<<s<<endl<<endl<<endl;
        map<ll,ll>mp;
        for(ll i=0;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i]+=32;
            }
            if(s[i]>='a' && s[i]<='z'){
                mp[s[i]]++;
            }
        }
        bool f=0;
        set<char>st;
       for(ll i=0;i<26;i++){
        if(mp[i+'a']==0){
            f=1;
            st.insert(i+'a');
        }
       }
    //    for(auto it:mp){
    //     cout<<it.first<<" "<<it.second<<endl;
    //    }
        if(f){
            cout<<"missing ";
            for(auto it:st){
                cout<<it;
            }
            cout<<endl;
        }
        else{
            cout<<"pangram"<<endl;
        }
        //cout<<s<<endl;
    }


    return 0;
}

