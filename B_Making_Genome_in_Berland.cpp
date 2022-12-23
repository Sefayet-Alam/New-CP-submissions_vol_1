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
const ll maxN=3e5+10;//for graph
#define M 10000



int vis[50];
vector<int> G[50];

void dfs(int x) {
	vis[x] = 2; //indicates that the character x has been used
     cout << (char)('a' + x);

	for(int i = 0; i < G[x].size(); i++) {
        int u = G[x][i];
        if(vis[u] != 2) {
            dfs(u);		
          }	
        }
    }







int main()
{
    int n; cin >> n;
    for(int i = 1; i <= n; i++) 
    {string s; cin >> s;
    for(int j = 1; j < s.size(); j++) 
    {
        vis[s[j]-'a'] = 1;			
        G[s[j-1]-'a'].push_back(s[j] - 'a'); //If this character is not in the substring Mark the position of the first character once it appears, indicating that it is not the unpredicted node to be found		
    }
        if(!vis[s[0]-'a']) vis[s[0]-'a'] = 6; //Used to find nodes without predecessor
	}
    for(int i = 0; i < 26; i++) {
        if(vis[i] == 6) dfs(i); //If the current node has no predecessor	
        }
        cout << endl;
        return 0;
    }