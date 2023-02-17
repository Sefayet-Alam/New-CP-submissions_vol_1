#include<bits/stdc++.h>

using namespace std;


#define ll                  long long

struct node {
    bool endmark;
    node* next[26 + 1];
    node()
    {
        endmark = false;
        for (int i = 0; i < 26; i++)
            next[i] = NULL;
    }
} * root;
void insert(string str, int len)
{
    node* curr = root;
    for (int i = 0; i < len; i++) {
        int id = str[i] - 'a';
        if (curr->next[id] == NULL)
            curr->next[id] = new node();
        curr = curr->next[id];
    }
    curr->endmark = true;
}
bool search(string str, int len)
{
    node* curr = root;
    for (int i = 0; i < len; i++) {
        int id = str[i] - 'a';
        if (curr->next[id] == NULL)
            return false;
        curr = curr->next[id];
    }
    return curr->endmark;
}
void del(node* cur)
{
    for (int i = 0; i < 26; i++)
        if (cur->next[i])
            del(cur->next[i]);

    delete (cur);
}
bool cmp(const string lhs, const string rhs) {
   return lhs.length() < rhs.length();
}
 
int main()
{
    //fast;
     ll t;
    //setIO();
     //ll tno=1;;
     t=1;
    //cin>>t;
    root = new node();
    while(t--){
        //ll n;
       // cin>>n;
        string s;
        vector<string>vec;
        string p;
          vector<string>answers;
       // while(n--){
        while(cin>>s){
           // cin>>s;
            vec.push_back(s);
             answers.push_back(s);
            //insert(s,s.size());
            
           
        }
      
       
        sort(vec.begin(),vec.end(),cmp);
        //cout<<vec<<endl;
        map<string,string>mp;
        bool f=0;
       
        string ans;
        for(ll i=0;i<vec.size();i++){
            f=0;
            p="";
            for(ll j=0;j<vec[i].size();j++){
                p+=vec[i][j];
                //cout<<vec[i]<<" "<<p<<endl;
                if(!search(p,p.size())){
                    mp[vec[i]]=p;
                    f=1;
                    insert(p,p.size());
                }
              
               if(f) break;
                
            }
         
        }
        for(auto it:answers){
            cout<<it<<" "<<mp[it]<<endl;
        }
    }


    return 0;
}
