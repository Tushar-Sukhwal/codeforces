// Author :- Tushar || 03-04-2025
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

const int mod = 998244353;
const int maxx = 5e5 + 10;

vector<int> fact(maxx);
vector<int> ifact(maxx);

int modpow(int a, int b) {
  int res = 1;
  while (b > 0) {
    if (b % 2 == 1) {
      res = res * a % mod;
    }
    a = a * a % mod;
    b /= 2;
  }
  return res;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  fact[0] = 1;
  for (int i = 1; i < maxx; ++i) {
    fact[i] = (fact[i - 1] * i) % mod;
  }
  ifact[maxx - 1] = modpow(fact[maxx - 1], mod - 2);
  for (int i = maxx - 2; i >= 0; --i) {
    ifact[i] = ifact[i + 1] * (i + 1) % mod;
  }

  int tt;
  cin >> tt;
  while (tt--) {
    vector<int> arr(26);
    int total = 0;
    for (int i = 0; i < 26; ++i) {
      cin >> arr[i];
      total += arr[i];
    }

    if (total == 0) {
      cout << 0 << endl;
      continue;
    }

    int even = (total + 1) / 2;
    int odd = total / 2;

    int profact = 1;
    for (int i = 0; i < 26; ++i) {
      if (arr[i] == 0) continue;
      profact = profact * fact[arr[i]] % mod;
    }
    int ipro = modpow(profact, mod - 2);

    vector<int> dp(even + 1, 0);
    dp[0] = 1;
    for (int i = 0; i < 26; ++i) {
      int w = arr[i];
      if (w == 0) continue;
      for (int j = even; j >= w; j--) {
        dp[j] = (dp[j] + dp[j - w]) % mod;
      }
    }

    if (dp[even] == 0) {
      cout << 0 << endl;
      continue;
    }

    int ans = dp[even] * fact[even] % mod;
    ans = ans * fact[odd] % mod;
    ans = ans * ipro % mod;

    cout << ans << endl;
  }

  return 0;
}
