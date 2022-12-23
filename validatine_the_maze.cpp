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
const ll maxN=255;//for graph
#define M 10000



bool vis[maxN][maxN];
ll n,m;
ll arr[maxN][maxN];
string s[maxN];
ll f=0;
bool isvalid(ll i,ll j){

    if(i<=0 || j<=0 || i>n || j>m){
        f++;
    return false;}
    if(arr[i][j]=='#') return false;

    return true;
}
ll cnt=0;
ll stx,sty;
vector<pair<ll,ll> >movements={{-1,0},{1,0},{0,-1},{0,1}};
ll w,e;

void dfs(ll i,ll j){

    vis[i][j]=1;
    if((i!=stx || j!=sty) && (i==1||i==n||j==1||j==m)){
        cnt++;

    }
    for(auto it:movements){
       w=it.first;
       e=it.second;
       if(isvalid(i+w,j+e) && !vis[i+w][j+e]) dfs(i+w,j+e);
    }

}

int main()
{
    fast;
     ll t;
     //ll tno=1;;
     t=1;
    cin>>t;
   while(t--){
    f=0;
    cnt=0;
    cin>>n>>m;
    char ch;
    for(ll i=1;i<=n;i++){

        for(ll j=1;j<=m;j++){
           scanf(" %c",&ch);
            arr[i][j]=ch;
        }
    }

    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++){
           if(vis[i][j] || arr[i][j]=='#')continue;
           else if(arr[i][j]=='.' && (i==1||i==n||j==1||j==m)){
            stx=i,sty=j;

            dfs(i,j);
            //cout<<i<<" "<<j<<" "<<f<<endl;
            //cout<<i<<" "<<j<<" "<<cnt<<endl;

        }
        }
    }

    if(n==1 && m==1) cout<<"invalid"<<endl;
    else if((n==1 || m==1)&&  cnt==1) cout<<"valid"<<endl;
    else if((n==1 || m==1)&& f==2 && cnt==0) cout<<"valid"<<endl;
    else if(cnt==1) cout<<"valid"<<endl;
    else{cout<<"invalid"<<endl;}
    memset(vis,0,sizeof(vis));
   }
    return 0;
}


