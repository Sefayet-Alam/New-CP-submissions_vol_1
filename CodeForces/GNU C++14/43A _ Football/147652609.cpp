#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,i,mx=0;
    string s;
    cin>>n;
    map<string,int>mp;
    map<string,int>::iterator it;
    for(i=0;i<n;i++)
    {
        cin>>s;
        mp[s]++;
    }
    for(it=mp.begin();it!=mp.end();it++){
        if(it->second>mx){
            mx=it->second;
            s=it->first;
        }
    }
    cout<<s<<endl;
 
 
    return 0;
}