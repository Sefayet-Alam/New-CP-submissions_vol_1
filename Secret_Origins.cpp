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

#define M 10000

void setIO(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE

}

vector<ll> binaryNum;
void decToBinary(ll n)
{
   
    int i = 0;
    while (n > 0) {
        binaryNum.push_back(n%2);
        n = n / 2;
    }
    binaryNum.push_back(0);
   reverse(binaryNum.begin(),binaryNum.end());
    
}
ll binarytodec(){
     reverse(binaryNum.begin(),binaryNum.end());
     ll ans=0;
     ll cnt=0;
     for(ll i=0;i<binaryNum.size();i++){
        ans+=(binaryNum[i]*pow(2,cnt));
        cnt++;
     }
     return ans;
}
int main()
{
    fast;
     ll t;
    //setIO();
     ll tno=1;;
     //t=1;
    cin>>t;

    while(t--){
        binaryNum.clear();
        ll n;
        cin>>n;
        decToBinary(n);
        next_permutation(binaryNum.begin(),binaryNum.end());
        // for(auto it:binaryNum){
        //     cout<<it;
        // }
        // cout<<endl;
        cout<<"Case "<<tno++<<": "<<binarytodec()<<endl;
    }


    return 0;
}

