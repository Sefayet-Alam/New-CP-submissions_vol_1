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

string overlapjoin(string a, string b) {
    for (long long x = (b.length()<= a.length())? b.length(): a.length(); x > 0; --x)
        if (a.substr(a.length() - x, a.length() - 1) == b.substr(0, x))
            return(a.substr(0, a.length() - x) + b);
    return(a + b);
}

int isSubstring(string s1, string s2)
{
    // using find method to check if s1 is
    // a substring of s2
    if(s2.size()<s1.size()) return false;

    if (s2.find(s1) != string::npos) return true;
    return false;
}
int main()
{
    fast;
     ll t;
    //setIO();
     //ll tno=1;;
     t=1;
    //cin>>t;

    while(t--){

        string s1,s2,s3;
        cin>>s1>>s2>>s3;
        string final1,final2,final3,final4,final5,final6;
        if(isSubstring(s1,s2) ||  isSubstring(s1,s3))  s1="";
        else if(isSubstring(s2,s1) ||  isSubstring(s2,s3)) s2="";
        else if(isSubstring(s3,s2) ||  isSubstring(s3,s1))  s3="";

        string ans=overlapjoin(s1,s2);
        final1=overlapjoin(ans,s3);

        string ans2=overlapjoin(s2,s1);
        final2=overlapjoin(ans2,s3);

        string ans3=overlapjoin(s1,s3);
        final3=overlapjoin(ans3,s2);

        string ans4=overlapjoin(s2,s3);
        final4=overlapjoin(ans4,s1);

        string ans5=overlapjoin(s3,s1);
        final5=overlapjoin(ans5,s2);

        
        string ans6=overlapjoin(s3,s2);
        final6=overlapjoin(ans6,s1);

        ll q=min(final1.size(),final2.size());
         ll w=min(final3.size(),final4.size());
          ll e=min(final5.size(),final6.size());
       // cout<<final1<<endl<<final2<<endl<<final3<<endl<<final4<<endl<<final5<<endl<<final6<<endl;
        cout<<min(q,min(w,e))<<endl;
    }


    return 0;
}

