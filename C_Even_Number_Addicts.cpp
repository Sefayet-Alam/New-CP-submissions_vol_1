#include<bits/stdc++.h>
#define endl "\n"
#define int long long
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
    
    	int n,i,e=0,o=0,x;
	    cin>>n;
	    for(i=0;i<n;i++){
	    	cin>>x;
	    	if(abs(x)%2==0)e++;
	    	else o++;
	    }
 
	    if(n%2==0){
	    	if(e%2==0){
	    		if((o+2)%4==0)cout<<"Bob"<<endl;
	    		else cout<<"Alice"<<endl;
	    	}
	    	else{
	    		cout<<"Alice"<<endl;
	    	}
	    }
	    else{
	    	if(e%2==0){
	    		if((o-1)%4==0)cout<<"Bob"<<endl;
	    		else cout<<"Alice"<<endl;
	    	}
	    	else{
	    		if((o+2)%4==0)cout<<"Bob"<<endl;
	    		else cout<<"Alice"<<endl;
	    	}
	    }
     
    }
    
    return 0;
}
