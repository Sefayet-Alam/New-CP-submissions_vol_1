#include <bits/stdc++.h>

using namespace std;

int main()
{
    int y1,y2;
    string x;
    cin>>y1;
    bool f=1;

    while(f)
    {
    f=0;
    y1++;
    string y=to_string(y1);
    x=y;
    //cout<<x<<" "<<y2<<endl;
    sort(y.begin(),y.end());
    for(int i=0;i<y.size();i++)
    {
        if (y[i] == y[i+1])
        {
            f=1;
        }

    }

    }
       cout<<x<<endl;
   return 0;
}