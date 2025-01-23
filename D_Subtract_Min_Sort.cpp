// Author :- Tushar || 20-01-2025 12:08:25
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
    for (auto &it : arr) cin >> it;

    if (n == 2) {
      if (arr[1] >= arr[0])
        cout << "YES\n";
      else
        cout << "NO\n";

      continue;
    }

    int flag = 0;

    for (int i = 2; i < n; i++) {
      if (arr[i - 2] > arr[i - 1] && arr[i - 1] > arr[i]) {
        flag = 1;
        break;
      }
    }

    if (!flag)
      cout << "YES\n";
    else
      cout << "NO\n";
  }

  return 0;
}
