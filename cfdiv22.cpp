#include <bits/stdc++.h>
#include<stack>
#define ll long long
#define ghost 0
#define PI 3.1415926535897932385
#define INF 1000111222
#define eps 1e-7
#define pb push_back
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define rep(i,n) for(int i=0;i<n;i++)
#define maxN 1011
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;


bool canBeBalanced(string sequence)
{

    if (sequence.size() % 2)
        return false;

    stack<char> stack_, stack2_;

    int countOpen = 0, countClosed = 0;
    int countSymbol = 0;


    for (int i = 0;
         i < sequence.size(); i++) {

        if (sequence[i] == ')') {


            countClosed++;


            if (stack_.empty()) {
                return false;
            }

            else {
                stack_.pop();
            }
        }

        else {

            if (sequence[i] == '?') {


                countSymbol++;
            }
            else {


                countOpen++;
            }
            stack_.push(sequence[i]);
        }
    }


    for (int i = sequence.size() - 1;
         i >= 0; i--) {

        if (sequence[i] == '(') {


            if (stack2_.empty()) {
                return false;
            }


            else {
                stack2_.pop();
            }
        }
        else {
            stack2_.push(sequence[i]);
        }
    }


    int extra = abs(countClosed - countOpen);


    if (countSymbol < extra) {
        return false;
    }

    else {


        countSymbol -= extra;


        if (countSymbol % 2 == 0) {
            return true;
        }
    }
    return false;
}

int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(canBeBalanced(s)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


    return 0;
}
