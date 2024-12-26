// Author :- Tushar || 22-12-2024 20:31:36
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
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> arr(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      sum += arr[i];
    }

    sort(arr.begin(), arr.end());
    int count = 0;

    for (int i = 0; i < n; i++) {
      int temp = sum - arr[i];

      int l =
          lower_bound(arr.begin() + i + 1, arr.end(), temp - y) - arr.begin();

      int r = upper_bound(arr.begin() + i + 1, arr.end(), temp - x) -
              arr.begin() - 1;

      if (l <= r) {
        count += (r - l + 1);
      }
    }

    cout << count << endl;
  }

  return 0;
}
