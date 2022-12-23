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


const ll maxN=1e5+10;//for graph
#define M 10000


vector<char>g[200];
bool vis[200];
map<char,ll>color;

void dfs(char vertex,ll k){
    //take action on vertex after entering the vertex
    vis[vertex]=true;
    color[vertex]=k;
    //cout<<vertex<<endl;
    for(auto child:g[vertex]){
        //cout<<"par:"<<vertex<<" "<<"child:"<<child<<endl;
        if(vis[child]) continue;
        //take action on the node before entering the child
        dfs(child,k);
        //take action on the node after exiting the child
    }
    //take action on the vertex after exiting the node
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
        ll n,q;
        cin>>n>>q;

       char c,e;
       for(ll i=0;i<n;i++){
        cin>>c>>e;
        g[c].push_back(e);
        //cout<<c<<" "<<e<<endl;
       }
      
        // for(auto it:g){
        //     for(ll i=0;i<it.size();i++){
        //         cout<<it[i]<<" ";
        //     }
        //     cout<<endl;
        // }
         string s1,s2;
       while(q--){
        cin>>s1>>s2;
        //cout<<s1<<" "<<s2<<endl;
        bool f=0;
        for(ll i=0;i<s1.size();i++){
           
            if(s1[i]==s2[i]) continue;
            memset(vis,0,sizeof(vis));
            color[s1[i]]=1;
            color[s2[i]]=0;
            
            dfs(s1[i],1);
            if(color[s1[i]]!=color[s2[i]]){
                f=1;
                break;
            }
           
        }
        if(s1.size()!=s2.size()) f=1;
        if(f) cout<<"no"<<endl;
        else cout<<"yes"<<endl;
       }
    }


    return 0;
}

