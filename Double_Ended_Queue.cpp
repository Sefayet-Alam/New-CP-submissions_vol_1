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


int main()
{
    //fast;
     ll t;
    //setIO();
     ll tno=1;;
     //t=1;
    cin>>t;

    while(t--){
        cout<<"Case "<<tno++<<":"<<endl;
        
        ll n,m;
        cin>>n>>m;
        ll k;
        deque<ll> deq;
        while(m--){
            // for(auto it:deq){
            //     cout<<it<<" ";
            // }
            // cout<<endl;
            string s;
            cin>>s;
           //cout<<s<<endl;
           
            if(s=="pushLeft" ||s=="pushRight") {
                cin>>k;
               if(deq.size()==n)  cout<<"The queue is full"<<endl;
                else if(s=="pushLeft"){
                    deq.push_front(k);
                    cout<<"Pushed in left: "<<k<<endl;
                }
                else if(s=="pushRight"){
                    deq.push_back(k);
                    cout<<"Pushed in right: "<<k<<endl;
                }
            }
            else{
               
               if(deq.empty()){
                    cout<<"The queue is empty"<<endl;
                }
                else if(s=="popLeft"){
                     cout<<"Popped from left: "<<deq.front()<<endl;
                     deq.pop_front();
                }
                else if(s=="popRight"){
                  
                    cout<<"Popped from right: "<<deq.back()<<endl;
                      deq.pop_back();
                }
            }
        }
    }


    return 0;
}

