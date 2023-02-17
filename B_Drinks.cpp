#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    double a[t+1];
 
    for(int i = 0; i < t; i++)
        cin >> a[i];
 
    double sum=0;
 
    for(int i = 0; i < t; i++)
    {
        sum = sum + (double)a[i]/100;
        //cout << sum << endl;
    }
 
    double ans = (sum/t)*100;
 
    cout << fixed << setprecision(13) << ans << endl;
}