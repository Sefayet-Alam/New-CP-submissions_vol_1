#include <bits/stdc++.h>
#define ll long long
#define ghost 0
#define PI 3.1415926535897932385
#define INF 1000111222
#define eps 1e-7
#define maxN 1011
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
 
const ll md = 1000000007;
void setIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
map<string,string> mp;
 
char in[maxN],out[maxN];
int main()
{
    fast;
    //setIO();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, i,j;
        cin >> n;
        string a[n];
        for(i = 0; i < n; i++) cin >> a[i];
 
        ll indexf[130][130] = {0}, indexl[130][130] = {0};
        ll inf[130] = {0}, inl[130] = {0};
        for(i = 0; i < n; i++){
            indexf[a[i][0]][a[i][1]]++;
            inf[a[i][0]]++;
            indexl[a[i][1]][a[i][0]]++;
            inl[a[i][1]]++;
 
        }
        ll ans = 0, x, y;
        for(i = 90; i < 120; i++){
            if(inf[i] > 1){
                x = inf[i];
                for(j = 90; j < 120; j++){
                    if(indexf[i][j] > 0){
                        y = indexf[i][j];
                        ans = ans + y*(x-y);
                        x-=y;
                    }
                    if(x < 2) break;
                }
            }
        }
        for(i = 90; i < 120; i++){
            if(inl[i] > 1){
                x = inl[i];
                for(j = 90; j < 120; j++){
                    if(indexl[i][j] > 0){
                        y = indexl[i][j];
                        ans = ans + y*(x-y);
                        x-=y;
                    }
                    if(x < 2) break;
                }
            }
        }
        cout<<ans;
        cout<<endl;
 
    }
 
    return ghost;
}