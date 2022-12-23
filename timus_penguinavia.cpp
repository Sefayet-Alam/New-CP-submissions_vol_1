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


vector<vector<int> > a(101,vector<int>(101));
vector<vector<char> >  b(101,vector<char>(101,'0'));
int n,d,aa;
long long int cost=0;
bitset<101> vis;
void dfs(int u,int p){
    vis[u]=1;
    for(int i=1;i<=n;i++)
        if(a[u][i]){
            if(!vis[i])
                dfs(i,u);
            else if(i>u&&i!=p)
            {
                //cout<<i<<" "<<u<<endl;
                b[u][i]=b[i][u]='d';
                a[u][i]=a[i][u]=0;
                cost+=d;
            }

        }
}
//dfs loop check:marking vis:for u=1: vis 2->vis 1-> vis 3
//for u=1,i=3...we get 3 is visited already!...so we get a point visited or connected started from 1 in two ways...so there exists a loop
//for connected compotents:all components should be connected to 1..
int main(){
    cin>>n>>d>>aa;
    for(int i=1;i<=n;i++){
        ws(cin);
        for(int j=1;j<=n;j++)
            {
                char c;
                cin>>c;
                a[i][j]=c-'0';
            }
    }
    dfs(1,1);
    for(int i=2;i<=n;i++){
        if(!vis[i]){
            dfs(i,i);
            cost+=aa;
            b[1][i]=b[i][1]='a';
            a[i][1]=a[1][i]=1;
        }
    }
    cout<<cost<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            cout<<b[i][j];
        cout<<endl;
    }
    return 0;
}
