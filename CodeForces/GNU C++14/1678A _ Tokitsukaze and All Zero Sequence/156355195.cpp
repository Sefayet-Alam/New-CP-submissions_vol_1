#include<bits/stdc++.h>
#define endl "\n"
#define in long long
#define dub double
#define ghost 0
#define dubb long double
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    in i,j,k,n,c,s,f,t,x;
    cin>>t;
    while(t--){
        c=0,f=0,s=0;
        cin>>n;
        in a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0) c++;
 
        }
        sort(a,a+n);
        for (i=1;i<n;i++){
            if(a[i]==a[i-1]){
                f=1;
                break;
            }
        }
        if(c){
            cout<<n-c<<"\n";
        }
        else if(f){
            cout<<n<<"\n";
        }
        else cout<<n+1<<"\n";
    }
    return ghost;
}