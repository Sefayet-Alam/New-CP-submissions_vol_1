#include <bits/stdc++.h>
#define MAXN 200005
#define int long long
using namespace std;

map<string, int> cnt;
vector<int> w, i1, n;
vector<pair<int, int> > ans;
int T, m;

void solve() {
    cin >> m;
    string s;
    cnt.clear();
    w.clear();
    i1.clear();
    n.clear();
    for (int i = 1; i <= m; i++) {
        cin >> s;
        cnt[s]++;
        if (s == "win") w.push_back(i);
        if (s == "iwi") i1.push_back(i);
        if (s == "niw") n.push_back(i);
    }

    int k = 0;
    for (int j = 0; j < min(w.size(), min(i1.size(), n.size())); j++) {
        int a = w[j], b = i1[j], c = n[j];
        ans.push_back({a, b});
        ans.push_back({a, c});
        ans.push_back({b, c});
        k += 3;
    }
    cout << k / 3 << endl;
    for (int j = 0; j < k; j++) {
        cout << ans[j].first << " " << (j % 3 == 0 ? 'w' : (j % 3 == 1 ? 'i' : 'n')) << " ";
        cout << ans[j].second << " " << (j % 3 == 0 ? 'i' : (j % 3 == 1 ? 'n' : 'w')) << endl;
    }
}

signed main() {
    cin >> T;
    while (T--) solve();
    return 0;
}
