// Author :- Tushar || 02-06-2025 21:08:02
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
  int n, k;
  cin >> n >> k;
  string str;
  cin >> str;

  int one = 0, zero = 0;
  for (auto it : str) {
    if (it == '0')
      zero++;
    else
      one++;
  }

  while (k) {
    if (one > zero) {
      if (one > 1)
        one -= 2;
      else
        break;
    } else {
      if (zero > 1)
        zero -= 2;
      else
        break;
    }
    k--; 
  }

  if (k != 0) {
    cout << "NO" << endl;
    return;
  }
  if (one != zero) {
    cout << "NO" << endl;
    return;
  }
  cout << "YES" << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int tt = 0;
  cin >> tt;
  while (tt--) {
    solve();
  }
  return 0;
}
