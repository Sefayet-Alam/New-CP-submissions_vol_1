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
const ll INF=1e9+10;//for graph
const ll maxN=1e3+10;//for graph



bool vis[maxN][maxN];

ll n,m;
ll stx,sty,enx,eny;
ll arr[maxN][maxN];
char ch[maxN][maxN];

bool isvalid(ll i,ll j){
    if(i<0 || j<0 || i>=n || j>=m || vis[i][j] || arr[i][j]=='#'){
        return false;
    }
    return true;

}


ll level[maxN][maxN];
ll prev[maxN][maxN];
//bfs=breadth first search
//according to level traversal
vector<pair<ll,ll> >movements={{-1,0},{1,0},{0,-1},{0,1}};

void bfs(ll srcx,ll srcy){
    queue<pair<ll,ll> > q;
    q.push({srcx,srcy});
    vis[srcx][srcy]=1;
    level[srcx][srcy]=0;
    while(!q.empty()){
        pair<ll,ll> curr_v=q.front();
        q.pop();
        //cout<<curr_v.first<<" "<<curr_v.second<<endl;
        for(auto it:movements){
            if(isvalid(curr_v.first+it.first,curr_v.second+it.second)){
                q.push({curr_v.first+it.first,curr_v.second+it.second});
                 if(it.first==-1 && it.second==0) ch[curr_v.first+it.first][curr_v.second+it.second]='U';
                 if(it.first==1 && it.second==0) ch[curr_v.first+it.first][curr_v.second+it.second]='D';
                 if(it.first==0 && it.second==-1) ch[curr_v.first+it.first][curr_v.second+it.second]='L';
                 if(it.first==0 && it.second==1) ch[curr_v.first+it.first][curr_v.second+it.second]='R';
                vis[curr_v.first+it.first][curr_v.second+it.second]=1;
                level[curr_v.first+it.first][curr_v.second+it.second]=level[curr_v.first][curr_v.second]+1;

            }
        }
    }
    
}
void reset(){
    for(ll i=0;i<maxN;i++){
        for(ll j=0;j<maxN;j++){
            vis[i][j]=0;
            level[i][j]=INF;
        }
    }

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
        cin>>n>>m;
        string s;
      
        for(ll i=0;i<n;i++){
            cin>>s;
            for(ll j=0;j<m;j++){
            arr[i][j]=(ll)s[j];

              if(arr[i][j]=='A'){
                stx=i;
                sty=j;
              }
              if(arr[i][j]=='B'){
                enx=i;
                eny=j;
              }
            }
        }
        reset();
        bfs(stx,sty);
        if(level[enx][eny]==INF){
             cout<<"NO"<<endl;
         }
        else{
           
            cout<<"YES"<<endl;
            cout<<level[enx][eny]<<endl;
          
            string ans = "";
	
	    // Starting from B to track back
	int curri = enx, currj = eny;
	
	// loop until we react A(starti, startj)
	while(!(curri==stx && currj==sty)){
		
		// storing direction in our answer where we have come
		// it is opposite as while doing bfs
		// because we are going from B to A now
		ans += ch[curri][currj];
		switch(ch[curri][currj]){
			case 'D':
				curri--;
				break;
			case 'U':
				curri++;
				break;
			case 'R':
				currj--;
				break;
			case 'L':
				currj++;
				break;
		}
	}
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
    }

      

        
    }


    return 0;
}

