#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string ans="";
        ans+=s[0];
        if(s[0]==s[1]||s[1]>s[0])
        {
                    cout<<ans;
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;
 
 
        }
        else
        {
            for(int i=1;i<n;i++)
        {
 
            if(s[i]<=s[i-1])
            {
                ans+=s[i];
            }
            else
                break;
 
        }
        cout<<ans;
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;
 
 
        }
 
    }
 
}