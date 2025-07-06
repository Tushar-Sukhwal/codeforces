#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    const int mod = 998244353;
    vector<int> pw = {1};
    while (pw.size() <= n) {
      pw.push_back((pw.back() * 2) % mod);
    }

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    vector<int> pa(n), pb(n);
    for (int i = 0; i < n; i++) {
      pa[a[i]] = i;
      pb[b[i]] = i;
    }

    vector<vector<int>> g(n);
    for (int i = 0; i < n; i++) {
      int pos = min(pa[i], pb[i]);
      g[pos].push_back(i);
    }

    set<int> st;
    vector<int> res;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < g[i].size(); j++) {
        st.insert(g[i][j]);
      }

      int mx = *st.rbegin();
      int val = -1;

      if (pa[mx] <= i) {
        int k = i - pa[mx];
        val = max(val, b[k]);
      }
      if (pb[mx] <= i) {
        int k = i - pb[mx];
        val = max(val, a[k]);
      }

      res.push_back((pw[mx] + pw[val]) % mod);
    }

    for (int i = 0; i < res.size(); i++) {
      cout << res[i] << " ";
    }
    cout << endl;
  }
  return 0;
}
