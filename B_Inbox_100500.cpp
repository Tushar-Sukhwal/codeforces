#include <bits/stdc++.h>

using namespace std;

const int mod = 1e9 + 7;

void solve() {
  int n, ans = 0;
  cin >> n;
  int a[n];
  for (int i = 1; i <= n; i++) cin >> a[i];

  for (int i = 0; i < n - 1; i++) {
    if (a[i] == 0 && a[i + 1] == 1) ++ans;
    if (a[i] && a[i + 1]) ++ans;
    if (a[i] == 1 && a[i + 1] == 0) ++ans;
  }
  cout << ans << endl;
}

int main() {
  ios::sync_with_stdio(0);

  cin.tie(0);

  int t = 1, i = 1;

  // cin >> t;

  while (t--) {
    // cout << "Case #" << i << ": ";

    solve();
  }

  return 0;
}