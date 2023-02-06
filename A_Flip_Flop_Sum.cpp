#include<bits/stdc++.h>
#include<array>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n+1];
        int cnt{0}, cnt1{0}, sum{0};
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i] == 1)
                cnt++;
            else
                cnt1++;
        }
 
        if(cnt == n)
        {
            cout << n - 4 << endl;
        }
 
        else if(cnt1 == n)
        {
            cout << -1*(n - 4) << endl;
        }
 
        else
        {
            for(int i = 0; i < n; i++)
            {
                if(a[i] == -1 && a[i+1] == -1)
                {
                    a[i] = 1;
                    a[i+1] = 1;
                    break;
                }
            }
            for(int i = 0; i < n; i++)
            {
                sum += a[i];
            }
 
            cout << sum << endl;
        }
 
    }
}