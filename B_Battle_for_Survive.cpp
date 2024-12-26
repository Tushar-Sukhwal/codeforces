// Author :- Tushar || 20-09-2024 20:44:16
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
    int sum = 0;
    for (int i = 0; i < n - 2; i++) sum += arr[i];

    sum = arr[n - 2] - sum;
  
    sum = arr[n - 1] - sum;
    cout << sum << endl;
  }

  return 0;
}
