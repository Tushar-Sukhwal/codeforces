// Author :- Tushar || 12-02-2025 20:04:49
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
  set<int> st;
  vector<int> arr(n);
  int flag = 0;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    if (st.count(arr[i])) {
      flag = arr[i];
    }
    st.insert(arr[i]);
  }

  if (flag) {
    cout << 1 << endl;
    cout << flag << endl;
    return;
  }
  
  cout << -1 << endl;
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
