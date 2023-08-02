#include<bits/stdc++.h>

using namespace std;


#define ll long long

string decToBinary(ll num)
{
   
    string ret="";
    while (num > 0) {
        if(num%2){
            ret+='1';
        }
        else ret+='0';
        num = num / 2;
    }
    reverse(ret.begin(),ret.end());
    return ret;
   
}

ll binaryToDecimal(string n)
{
    string num = n;
    ll dec_value = 0;

    ll base = 1;
 
    ll len = num.length();
    for (ll i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }
 
    return dec_value;
}

int main()
{
    // fast;
    

    // freopen("binary.in", "r", stdin);

    ll t;
    ll tno=1;
    t=1;
    cin>>t;

    ll totaltc=t;

    while(t--){
        
        string s,p;

        cin>>s>>p;
        
        ll a=binaryToDecimal(s);
        ll b=binaryToDecimal(p);
        ll res=a*b;

        ll siz=s.size();
        ll sz=p.size();

        vector<string>vec;
       
        string zero(siz,'0');
       
        string gap="";

        string newn;

        for(ll i=sz-1;i>=0;i--){
            if(p[i]=='0'){
                 newn=zero+gap;
                 vec.push_back(newn);}
            else{
                newn=s+gap;
                vec.push_back(newn);;
            }
            gap+=' ';
        }

        string ans=decToBinary(res);

        if(res==0){
            if(p=="0"){
            ans="";
            ans.assign(siz,'0');
            }
            else{
            ans="";
            ans.assign(sz,'0');
            }
        }

        ll maxm=ans.size();

        string gapy(maxm-siz,' ');
        s=gapy+s;

        gapy.assign(maxm-sz,' ');
        p= gapy+p;


        ll dotgap=maxm-max(siz,sz);
       
        cout<<"Test "<<tno<<endl;

        cout<<s<<endl<<p<<endl;

        for(ll i=0;i<dotgap;i++) cout<<" ";
        for(ll i=dotgap;i<maxm;i++) cout<<"-";
        cout<<endl;

        string z;
        for(auto it:vec){
            z=it;
            for(ll i=0;i<maxm-z.size();i++) cout<<" ";
            cout<<z<<endl;
        }
        for(ll i=0;i<ans.size();i++) cout<<"-";
        cout<<endl;
        
        if(res==0){
            ans.assign(maxm-1,' ');
            ans+="0";
        }
         cout<<ans<<endl;

        cout<<endl;

        tno++;
    }

    return 0;
}

