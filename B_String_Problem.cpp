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
const ll maxN=1e3+10;
const ll INF=1000000000;
#define M 10000

void setIO(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE

}

ll dist[maxN][maxN];
int main()
{
    fast;
     ll t;
    //setIO();
     //ll tno=1;;
     t=1;
    //cin>>t;
    
    while(t--){
        for(ll i='a';i<='z';i++){
            for(ll j='a';j<='z';j++){
               if(i!=j) dist[i][j]=INF;
            }
        }
        string a,b;
        cin>>a>>b;

        ll q;
        cin>>q;
        while(q--){
            char n,m;
            ll cost;
            cin>>n>>m>>cost;
            if(n==m) continue;
            dist[n][m]=min(dist[n][m],cost);
        }
        for(ll k='a';k<='z';k++){
         for(ll i='a';i<='z';i++){
            for(ll j='a';j<='z';j++){
              if(i!=j) dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
              dist[i][i]=dist[j][j]=0;
            }
        }
        }
        ll tot=0;
        ll siz=a.size();
        string ans;
        ll idx=0;
        for(ll i=0;i<a.size();i++){
            if(a[i]==b[i]){ ans.push_back(a[i]);idx++;}
            else{
                ans.push_back('0');
                ll ne=0;
                ll ne2=0,ne3=0;
                //cout<<a[i]<<" "<<dist[a[i]][k]<<" "<<b[i]<<" "<<dist[b[i]][k]<<endl;
                ll distance=min(dist[a[i]][b[i]],dist[b[i]][a[i]]);
                for(ll k='a';k<='z';k++){
                    if(dist[a[i]][k]+dist[b[i]][k]<=distance){
                      //  cout<<a[i]<<" "<<dist[a[i]][k]<<" "<<(char)k<<" "<<b[i]<<" "<<dist[b[i]][k]<<endl;
                        distance=dist[a[i]][k]+dist[b[i]][k];
                        ne=dist[a[i]][k]+dist[b[i]][k];
                        ans[idx]=(char)k;
                    }
                 }
             
               
                tot+=ne;
                idx++;
                // cout<<ne<<" "<<ans[idx]<<endl; 
            }
        }
        if(a.size()!=b.size() || tot>=INF) cout<<-1<<endl;
       else cout<<tot<<endl<<ans<<endl;
        //cout<<dist['y']['w']<<" "<<dist['p']['w']<<endl;
    }


    return 0;
}
