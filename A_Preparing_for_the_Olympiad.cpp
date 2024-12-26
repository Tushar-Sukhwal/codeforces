// Author :- Tushar || 22-12-2024 20:06:28
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
    for (int i = 0; i < n; i++) cin >> arr[i];
    vector<int> brr(n);
    for (int i = 0; i < n; i++) cin >> brr[i];

    int sum = 0;
    for (int i = 0; i < n; i++) {
      if (i != n - 1) {
        if (arr[i] > brr[i + 1]) sum += (arr[i] - brr[i + 1]);
      }
    }
    sum += arr.back();

    cout << sum << endl;
  }

  return 0;
}
