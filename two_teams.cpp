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

vector<ll>g[maxN];
bool vis[maxN];
bool vis2[maxN];

vector<ll> team1,team2;

void dfs(ll vertex,ll r){
    //take action on vertex after entering the vertex
    vis[vertex]=true;

    //cout<<vertex<<endl;
    for(ll child:g[vertex]){

        //cout<<"par:"<<vertex<<" "<<"child:"<<child<<endl;
        if(vis[child]) continue;

        //take action on the node before entering the child
        if(r%2)team2.push_back(child);
        else{team1.push_back(child);}

        dfs(child,r+1);
        //take action on the node after exiting the child

    }
    //take action on the vertex after exiting the node
}

int main()
{
    fast;
     ll t;

     //ll tno=1;;
     t=1;
   //cin>>t;

    while(t--){
    ll n,k;
    cin>>n;
    for(ll i=1;i<=n;i++){

        while(cin>>k){
            if(k==0) break;
            g[i].push_back(k);
        }
    }
    for(ll i=1;i<=n;i++){

        if(vis[i]) continue;

        if(!g[i].empty()){
        team1.push_back(i);
        dfs(i,1);}
    }
    if(team1.size()+team2.size()!=n){cout<<0<<endl;}
    else{
        cout<<team1.size()<<endl;
        for(auto it:team1){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    }


    return 0;
}

