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


vector<int>first;
vector<string>second;
vector< pair<int, string> >result;

int main()
{
    int test, ind;
    scanf("%d",&test);
    string s, t, str;
    getchar();
    while(test--)
    {
        getchar();
        getline(cin,s);
        stringstream ss(s);
        while(ss>>ind) first.push_back(ind);
        getline(cin,str);
        stringstream sst(str);
        while(sst>>t) second.push_back(t);
        int sztot = min(first.size(), second.size());
        for(int i=0; i<sztot; i++)
        {
            result.push_back(make_pair(first[i],second[i]));
        }
        sort(result.begin(), result.end());
        for(int i=0; i<sztot; i++)
            cout<<result[i].second<<endl;
        first.clear();
        second.clear();
        result.clear();
        if(test)
            printf("\n");
    }
    return 0;
}

//link:https://ojsolver.blogspot.com/2015/09/uva-482-permutation-arrays-solution-c.html