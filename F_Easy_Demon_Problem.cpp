// Author :- Tushar || 15-12-2024 20:43:15
#include <bits/stdc++.h>

using namespace std;
/*
    ∧＿∧
　 (｡･ω･｡)つ━☆・*。
  ⊂/　 /　   ・゜
　しーＪ　　　     °。+ * 。　
　　　　　                .・゜
*/

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, m, q;
  cin >> n >> m >> q;
  vector<int> rsum(n), csum(m);
  for (int i = 0; i < n; i++) cin >> rsum[i];
  for (int i = 0; i < m; i++) cin >> csum[i];
  vector<vector<int>> arr(n, vector<int>(m));

  int tot = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      arr[i][j] = rsum[i] * csum[j];
      tot += arr[i][j];
    }
  }

  for (int i = 0; i < n; i++) {
    int sum = 0;
    for (int j = 0; j < m; j++) {
      sum += arr[i][j];
    }
    rsum[i] = sum;
  }

  for (int j = 0; j < m; j++) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
      sum += arr[i][j];
    }
    csum[j] = sum;
  }

  set<int> st;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      st.insert(tot - csum[j] - rsum[i] + arr[i][j]);
    }
  }

  for (int i = 0; i < q; i++) {
    int a;
    cin >> a;
    if (st.count(a))
      cout << "YES\n";
    else
      cout << "NO\n";
  }

  return 0;
}
