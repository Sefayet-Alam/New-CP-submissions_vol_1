#include <bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)

void setIO(){
    #ifndef ONLINE_JUDGE
    freopen("angle1.in", "r", stdin);

    freopen("angle1.out", "w", stdout);
    #endif // ONLINE_JUDGE

}  

int32_t main()
 {
    setIO();
    ios_base::sync_with_stdio(false); cin.tie(NULL);
     double a,b; cin>>a>>b;
     double polarang=atan2(b,a);
     if(polarang<0) polarang+=(2*pi);
     cout<<fixed<<setprecision(6)<<polarang<<endl;
return 0;
}