// Author :- Tushar || 28-12-2024 22:12:16
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

vector<int> func(vector<int>& arr) {
  int n = arr.size();
  vector<pair<int, int>> temp(n);
  for (int i = 0; i < n; i++) {
    temp[i] = make_pair(arr[i], i);
  }
  sort(arr.begin(), arr.end()); 
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int tt;
  cin >> tt;
  while (tt--) {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<int> b(n);
    for (int i = 0; i < n; i++) cin >> b[i];

    for (int i = 0; i < q; i++) {
      int x, inc;
      cin >> x >> inc;
    }
  }

  return 0;
}
