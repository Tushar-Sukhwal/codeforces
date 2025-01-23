// Author :- Tushar || 07-01-2025 22:24:13
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
    int n, k, a, b;
    cin >> n >> k >> a >> b;

    vector<int> per(n), arr(n);
    for (auto &it : per) cin >> it;
    for (auto &it : arr) cin >> it;

    int ma = 0, mb = 0, curr = a, temp = 0;

    for (int i = 0; i < k && i < n; i++) {
      ma = max(ma, temp + arr[curr - 1] * (k - i));
      temp += arr[curr - 1];
      curr = per[curr - 1];
    }

    curr = b;
    temp = 0;

    for (int i = 0; i < k && i < n; i++) {
      mb = max(mb, temp + arr[curr - 1] * (k - i));
      temp += arr[curr - 1];
      curr = per[curr - 1];
    }

    if (ma > mb)
      cout << "Bodya" << endl;
    else if (ma < mb)
      cout << "Sasha" << endl;
    else
      cout << "Draw" << endl;
  }

  return 0;
}


