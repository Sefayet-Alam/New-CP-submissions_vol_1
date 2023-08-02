#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;


#define ll                  long long



int main()
{
    
    ll t1,t2,v1,v2;
    cin>>t1>>v1;
    cin>>t2>>v2;
    
    if(t2<0 && v2>=10){  
        cout<<"A storm warning for tomorrow! Be careful and stay home if possible!"<<endl;
    }
    else if(t2<t1){
        cout<<"MCHS warns! Low temperature is expected tomorrow."<<endl;
    }
    else if(v2>v1){
       
        cout<<"MCHS warns! Strong wind is expected tomorrow."<<endl;
    }
    else cout<<"No message"<<endl;

    return 0;
}

