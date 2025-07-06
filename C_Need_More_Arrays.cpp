// Author :- Tushar || 02-06-2025 21:21:58
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
  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;
    st.insert(num);
  }
  vector<int> arr(st.begin(), st.end());
  int count = 0;
  count++;
  n = arr.size();
  for (int i = 1; i < n; i++) {
    if (arr[i] == arr[i - 1] + 1) {
      if (i != n - 1) count++;
      i++;
    } else {
      count++;
    }
  }
  cout << count << endl;
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
