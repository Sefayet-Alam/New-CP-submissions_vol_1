#include <bits/stdc++.h>

using namespace std;



#define ll long long

#define Setpre(n) cout << fixed << setprecision(n)

int main()
{

    double x, y, z, n;
   
    // freopen("cutting.in", "r", stdin);

    // freopen("cutting.out", "w", stdout);

     cin >> x >> y >> z >> n;

    double x1, y1, z1, x2, y2, z2;
    for (ll i = 0; i < n; i++)
    {
        x1 = 0.0;
        y1 = 0.0;
        z1 = (z / n)* i;
        x2 = x;
        y2 = y;
        z2 = (z / n )* (i + 1);
        Setpre(8) <<x1<<" "<<y1<<" "<<z1<<" "<<x2<<" "<<y2<<" "<<z2<<endl;
    }
    return 0;
}
