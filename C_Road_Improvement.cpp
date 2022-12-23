#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
typedef long long LL;
const int MaxN = 3e5 + 5;

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