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
const int mod=1e9+7;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count[26]{0};
    for(int i=0;i<n;i++)
      count[s[i]-'a']=1;
    for(int i=0;i<26;i++)
    {
      if(count[i]==0)
      {
        cout<<(char)('a'+i)<<endl;
        return;
      }
    }
 
    set<string>st;
    for(int i=0;i<n-1;i++)
    {
      string temp="";
      temp+=s[i];
      temp+=s[i+1];
      st.insert(temp);
    }
    for(int i=0;i<26;i++)
    {
      for(int j=0;j<26;j++)
      {
        string temp="";
        temp+=(char)('a'+i);
        temp+=(char)('a'+j);
        if(st.find(temp)==st.end())
        {
          cout<<temp<<endl;
          return;
        }
      }
    }
 
      set<string>stt;
      for(int i=0;i<n-2;i++)
      {
        string temp="";
        temp+=s[i];
        temp+=s[i+1];
        temp+=s[i+2];
        stt.insert(temp);
      }
 
      for(int i=0;i<26;i++)
      {
        for(int j=0;j<26;j++)
        {
          {
              string temp="a";
              temp+=(char)('a'+i);
              temp+=(char)('a'+j);
              if(stt.find(temp)==stt.end())
              {
                cout<<temp<<endl;
                return;
              }
          }
        }
      }
}
char in[maxN],out[maxN];
int main()
{
    fast;
    //setIO();
    ll t;
    cin>>t;
    while(t--)
    {
      solve();
    }
 
    return ghost;
}