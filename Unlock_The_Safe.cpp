#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n), b(n);
  for (auto &x : a) cin >> x;
  for (auto &x : b) cin >> x;
  int s = 0, m = 1e18;
  for (int i = 0; i < n; i++) {
    int d = abs(a[i] - b[i]);
    int d1 = min(d, 9 - d);
    int d2 = max(d, 9 - d);
    s += d1;
    if (d2 - d1 > 0) m = min(m, d2 - d1);
  }
  int e = k - s;
  if (e < 0) {
    cout << "No\n";
    return;
  }
  if (e % 2 == 0) {
    cout << "Yes\n";
    return;
  }
  cout << ((m <= e) ? "Yes" : "No") << "\n";
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}
