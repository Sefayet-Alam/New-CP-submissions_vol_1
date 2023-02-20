#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
 
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 
    int i,t,j,s,n,m,r,c,f,h,u;
     int v[10000];
    cin>>t;
    for(i=0;i<t;i++)
    {
        v[i]=0;
        cin>>n>>m>>r>>c;
        h=-1;
        char ch[n][m];
        for(j=0;j<n;j++)
        {
             for(f=0;f<m;f++)
             {
 
                cin>>ch[j][f];
                if (ch[j][f]=='B') {h=0;}
             }
        }
 
 
 
        if (h==-1) {v[i]=-1;}
 
        else if (ch[r-1][c-1]=='B') {v[i]=0;}
       else
        {
            bool p=false;
            for(int s=0; s<n; s++)
            {
                if(ch[s][c-1]=='B'){ p=true; v[i]=1; break; }
            }
            if(p==false)
            {
                for(int u=0; u<m; u++)
                {
                    if(ch[r-1][u]=='B'){ p=true; v[i]=1; break; }
                }
            }
            if(p==false){ v[i]=2; }
        }
 
 
 
    }
    for(i=0;i<t;i++)
    {
        cout<<v[i]<<endl;
    }
}