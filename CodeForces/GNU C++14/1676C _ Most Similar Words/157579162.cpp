#include<stdio.h>
#include<math.h>
#define ll long long
 
int min(int a,int b){
    if(a<b) return a;
    else return b;
}
int main(){
    ll t;
    scanf("%lld",&t);
    while(t--)
    {
        ll i,j,k,n,m;
       scanf("%lld %lld",&n,&m);
      ll x=n;
      char s[100][100];
 
 
    for(ll i=0;i<n;i++)
     {
        for(ll j=0;j<m;j++){
            scanf(" %c",&s[i][j]);
        }
    }
 
 
      ll ans=1000000;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            ll diff=0;
            for(k=0;k<m;k++)
            {
                diff+=abs(s[i][k]-s[j][k]);
            }
            ans=min(ans,diff);
        }
    }
    printf("%lld\n",ans);
    }
 
}