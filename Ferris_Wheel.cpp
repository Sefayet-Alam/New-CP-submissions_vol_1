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
const ll maxN=25;
#define M 10000

void setIO(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE

}

bool vis[maxN][maxN];
ll freq[maxN];
ll vec[maxN];
int main()
{
    fast;
     ll t;
    //setIO();
     ll tno=1;;
     //t=1;
    cin>>t;

    while(t--){
          queue < int > q , f;
          ll n,m;
          cin>>n>>m;
      
       for(ll i = 1 ; i <= m ; i++ )
       {
           f.push(i);
           vec[i]=-1 ;
       }
       memset(vis,0,sizeof(vis));
       memset(freq,0,sizeof(freq));
       for(ll i=1;i<=n;i++) q.push(i);
       ll ans=0,tot=0,lim=(n*m),stand ;
        while(tot<n)
       {
           ans++;
           ll sz=q.size();
           if(sz)
           stand = q.front();
           else stand = 0 ;
           ll available=f.front();
           ll leave=vec[available];
           if( stand && vis[stand][available] == 0 )
           {
               vec[available] = stand ;
               freq[stand]++;
               vis[stand][available] = 1 ;
               q.pop();

           }
             else
           {
              // printf(" else \n" );
               ll nxt = -1 ;
               for (ll i = 0 ; i < sz ; i++ )
               {
                   int now = q.front();
                   q.pop();
                   if(nxt == -1 && vis[now][available] == 0 )
                   {
                       vis[now][available] = 1 ;
                       nxt = now ;
                   }
                   else
                   {
                       q.push(now);
                   }
               }
                   vec[available] = nxt ;
                   if( nxt != -1 )
                   { freq[nxt]++;
                   
                   }

           }
             if( leave != -1 && freq[leave] < m ) q.push(leave);
             if( leave != -1 && freq[leave] == m ) tot++;


            f.pop();
            f.push(available);
       }
       cout<<"Case "<<tno++<<": "<<ans*5<<endl;
    }


    return 0;
}

