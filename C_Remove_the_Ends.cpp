// Author :- Tushar || 16-02-2025 20:41:03
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



int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> pre(n), suf(n);
    int ans = 0;

    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      if (arr[i] > 0)
        pre[i] = arr[i];
      else
        suf[i] = abs(arr[i]);
    }

    for (int i = 0; i < n; i++)
      if (i) pre[i] += pre[i - 1];

    for (int i = n - 1; i > -1; i--)
      if (i != n - 1) suf[i] += suf[i + 1];

    for (int i = 0; i < n; i++) ans = max(ans, pre[i] + suf[i]);
    cout << ans << endl;
  }

  return 0;
}

