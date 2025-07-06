// Author :- Tushar || 29-03-2025 20:33:55
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
  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  int mx = *max_element(a.begin(), a.end());
  int even = 0, odd = 0;
  int sum = 0;
  for (int num : a) {
    sum += num;
    if (num % 2 == 0) {
      even++;
    } else {
      odd++;
    }
  }

  if (even == 0 || odd == 0) {
    cout << mx << endl;
    return;
  }

  int evenc = 0;
  bool evenflg = false;
  if (odd <= n - 1 && (sum - odd) % 2 == 0) {
    evenc = sum - odd;
    evenflg = true;
  }

  int oddc = 0;
  bool oddflg = ((sum - odd) % 2 == 0);
  if (oddflg) {
    oddc = sum - (odd - 1);
  }

  int res = mx;
  if (evenflg) {
    res = max(res, evenc);
  }
  if (oddflg) {
    res = max(res, oddc);
  }

  cout << res << endl;
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
