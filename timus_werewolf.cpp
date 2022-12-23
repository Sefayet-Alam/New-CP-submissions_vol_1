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
const ll maxN=10005;//for graph
#define M 10000


vector<ll>g[maxN];
vector<bool> vis(maxN,0);
vector<bool> vis2(maxN,0);
vector<ll> sus(maxN,1);

vector<ll>g2[maxN];
ll n;
void dfs(ll vertex){
    //take action on vertex after entering the vertex
    vis[vertex]=1;
    sus[vertex]=0;
    //cout<<vertex<<endl;
    for(ll par:g[vertex]){
        //cout<<"par:"<<vertex<<" "<<"child:"<<child<<endl;
            if(vis[par]) continue;
        //take action on the node before entering the child
        dfs(par);
        //take action on the node after exiting the child
    }
    //take action on the vertex after exiting the node
}
void dfs2(ll vertex){
    //take action on vertex after entering the vertex
    vis2[vertex]=1;
    sus[vertex]=0;
    //cout<<vertex<<endl;
    for(ll child:g2[vertex]){
        //cout<<"par:"<<vertex<<" "<<"child:"<<child<<endl;
        if(vis2[child]) continue;
        //take action on the node before entering the child
        dfs2(child);
        //take action on the node after exiting the child
    }
    //take action on the vertex after exiting the node
}
void reset(){

    for(ll i=1;i<=n;i++){
        g[i].clear();
        g2[i].clear();
        vis[i]=0;
        vis2[i]=0;
        sus[i]=1;
    }

}
int main()
{
    fast;
     ll t;
     //ll tno=1;
     t=1;
    //cin>>t;
   while(t--){

    cin>>n;
    string s;
    //ll v1,v2;
    ll k=0;

   while(getline(cin,s)){

        if(s=="BLOOD"){break;}

        k++;
        string vs1,vs2;
        if(k==1){continue;}
        int st=0;
        for(int i=st;i<s.size();i++)
        {
            st++;
            if(s[i]!=' ')
            {
               vs1+=s[i];
            }
            else break;
        }
        for(int i=st;i<s.size();i++)
        {
            vs2+=s[i];
        }

        int v1=stoi(vs1);

      int v2=stoi(vs2);
       //cout<<v1<<" "<<v2<<endl;

       g[v1].push_back(v2);
       g2[v2].push_back(v1);
    }


    ll r;
    while(cin>>r){
        //if(r==0) break;
        dfs(r);
        dfs2(r);
       // cout<<r<<endl;

    }
    ll cnt=0;
    for(ll i=1;i<=n;i++){
    if(sus[i]) {cout<<i<<" ";
    cnt++;}
    }
    if(cnt==0) {cout<<0;}
    cout<<endl;
    reset();
   }


    return 0;
}
