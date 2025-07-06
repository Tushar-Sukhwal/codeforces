// Author :- Tushar || 13-04-2025 21:11:13
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

vector<int> getdiv(int num, int maxx) {
  vector<int> div;
  if (num == 0) return div;
  for (int d = 1; d * d <= num; d++) {
    if (num % d == 0) {
      if (d >= 2 && d <= maxx) div.push_back(d);
      if (d * d != num && num / d >= 2 && num / d <= maxx) {
        div.push_back(num / d);
      }
    }
  }
  return div;
}

void solve() {
  int n, q;
  cin >> n >> q;
  vector<int> arr(n);
  for (auto &it : arr) cin >> it;
  int maxx = *max_element(arr.begin(), arr.end());

  map<int,vector<int>> adj;
  for (int i = 0; i < n; i++) adj[arr[i]].push_back(i);

  for (int j = 0; j < q; j++) {
    int k, l, r;
    cin >> k >> l >> r;
    l--;
    r--;
    int ans = 0;
    int i = l;

    if (k == 1) {
      cout << (r - i + 1) << endl;
      continue;
    }
    while (i <= r) {
      vector<int> div = getdiv(k, maxx);
      int next = r + 1;

      for (int t = 0; t < div.size(); t++) {
        int it = div[t];
        auto itt = lower_bound(adj[it].begin(), adj[it].end(), i);
        if (itt != adj[it].end() && *itt <= r) next = min(next, *itt);
      }

      ans = ans + (next - i) * k;
      if (next > r) break;

      while (k != 0 && k % arr[next] == 0) k /= arr[next];

      ans += k;
      i = next + 1;
    }
    cout << ans << endl;
  }
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