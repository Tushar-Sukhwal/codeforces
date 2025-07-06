// Author :- Tushar || 22-03-2025 20:20:38
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
  vector<int> arr(n);
  int flag = 0;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    if (arr[i] == 0) flag = 1;
  }
  if (!flag) {
    cout << 1 << endl;
    cout << 1 << " " << n << endl;
    return;
  }

  int count = 0;
  int r = 0;
  vector<pair<int, int>> ans;

  while (r < arr.size() - 1) {
    if (arr[r] == 0) {
      ans.push_back({r - count + 1, r - count + 2});
      count++;
      r += 2;
    } else {
      r++;
    }
  }
  if (arr[r] == 0) {
    ans.push_back({r - count, r - count + 1});
    count++;
  }
  ans.push_back({1, n - count});
  cout << ans.size() << endl;
  for (auto it : ans) {
    cout << it.first << " " << it.second << endl;
  }
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int tt;
  cin >> tt;
  while (tt--) {
    solve();
  }

  return 0;
}
