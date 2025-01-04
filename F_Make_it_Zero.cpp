// Author :- Tushar || 31-12-2024 00:24:40
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

  int n;
  cin >> n;

  if (n % 2 == 0) {
    cout << n / 2 << endl;
    return 0;
  }

  int fac = 0;
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      fac = i;
      break;
    }
  }

  if(fac == 0) n = 0; 
  n = n - fac;

  cout << 1 + (n / 2) << endl;

  return 0;
}
