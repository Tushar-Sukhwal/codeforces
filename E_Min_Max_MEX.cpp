// Author :- Tushar || 08-04-2025 20:50:49
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
  int n, k;
  cin >> n >> k;
  vector<int> arr(n);

  for (auto &it : arr) cin >> it;

  int l = 0;
  int r = n;
  int ans = 0;
  set<int> st;
  while (l <= r) {
    int mid = l + (r - l) / 2, cnt = 0, ind = 0;
    st = {};
    int i = 0;
    while (i < n && cnt < k) {
      st.insert(arr[i]);
      while (st.count(ind)) ind++;
      if (ind >= mid) {
        st = {};
        ind = 0;
        cnt++;
      }
      i++;
    }
    if (cnt >= k) {
      l = mid + 1;
      ans = mid;
    } else
      r = mid - 1;
  }
  cout << ans << endl;
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
