// Author :- Tushar || 02-06-2025 21:31:52
#include <bits/stdc++.h>
#define int long long
using namespace std;
/*
    ∧＿∧
　 (｡･ω･｡)つ━☆・*。
  ⊂/　 /　   ・゜
　しーＪ　　　     °。+ * 。　
　　　　　                .・゜
*/

void solve() {
  int n;
  cin >> n;
  vector<pair<int, int>> arr(n);
  set<int> x, y;
  for (auto &it : arr) {
    cin >> it.first >> it.second;
    x.insert(it.first);
    y.insert(it.second);
  }
  if (n == 1) {
    cout << 1 << endl;  
    return;
  }
  vector<int> xr(x.begin(), x.end()), yr(y.begin(), y.end());

  vector<pair<int, int>> vl, vr, vt, vb;

  for (auto it : arr) {
    if (it.first == xr.front()) {
      vt.push_back(it);
    }
    if (it.first == xr.back()) {
      vb.push_back(it);
    }
    if (it.second == yr.front()) {
      vl.push_back(it);
    }
    if (it.second == yr.back()) {
      vr.push_back(it);
    }
  }
  int cl = yr.front(), cr = yr.back(), ct = xr.front(), cb = xr.back();

  int ans = LLONG_MAX;

  if (vt.size() == 1) {
    ans = min(ans, (cr - cl + 1) * (cb - xr[1] + 1));
  }
  if (vb.size() == 1) {
    ans = min(ans, (cr - cl + 1) * (xr[xr.size() - 2] - ct + 1));
  }
  if (vl.size() == 1) {
    ans = min(ans, (cb - ct + 1) * (cr - yr[1] + 1));
  }
  if (vr.size() == 1) {
    ans = min(ans, (cb - ct + 1) * (yr[yr.size() - 2] - cl + 1));
  }

  if (ans == LLONG_MAX) ans = (cr - cl + 1) * (cb - ct + 1);

  cout << ans << "\n";
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int tt = 0;
  cin >> tt;
  while (tt--) {
    solve();
  }
  return 0;
}
