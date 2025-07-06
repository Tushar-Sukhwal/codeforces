// Author :- Tushar || 11-02-2025 20:18:22
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
  vector<int> freq(n + 2);

  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    freq[a]++;
  }

  for (int i = 0; i < n + 1; i++) {
    if (freq[i] == 1) {
      cout << "No" << endl;
      return;
    } else if (freq[i] >= 2) {
      freq[i + 1] += freq[i] - 2;
    }
  }

  if (freq.back() % 2) {
    cout << "No" << endl;
    return;
  }
  cout << "Yes" << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int tt;
  cin >> tt;
  while (tt--) {
    solve();
  }

  return 0;
}
