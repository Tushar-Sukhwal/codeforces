// Author :- Tushar || 22-12-2024 20:46:04
#include <bits/stdc++.h>
#define int long long
using namespace std;
/*
    ∧＿∧
　 (.･ω･.)つ⋆・*。
  ⋉/　 /　   ・゜
　しーｊ　　　     °。+ * 。　
　　　　　　                .・゜
*/

int n, k;

int bs(vector<int>& arr, int it) {
  return arr.end() - lower_bound(arr.begin(), arr.end(), it);
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int tt;
  cin >> tt;
  while (tt--) {
    cin >> n >> k;
    vector<int> arr(n), brr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++) cin >> brr[i];

    sort(arr.begin(), arr.end());
    sort(brr.begin(), brr.end());

    vector<int> adj;

    for (int i = 0; i < n; i++) {
      adj.push_back(arr[i]);
      adj.push_back(brr[i]);
    }

    sort(adj.begin(), adj.end());
    adj.erase(unique(adj.begin(), adj.end()), adj.end());

    int ans = 0;
    for (int it : adj)
      if (bs(brr, it) - k <= bs(arr, it)) ans = max(ans, it * bs(brr, it));

    cout << ans << endl;
  }
  return 0;
}