// Author :- Tushar || 22-03-2025
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

long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}


vector<vector<vector<int>>> dp;
int k;

bool dfs(int i, int rx, int ry, int x, int y) {
  if (i == 63) return rx == 0 && ry == 0;
  if (dp[i][rx][ry] != -1) return dp[i][rx][ry];

  // 0
  int nx = (x >> i) & 1;
  int ny = (y >> i) & 1;

  int sumx = nx + rx + 0;
  int sumy = ny + ry + 0;

  int valx = sumx % 2;
  int valy = sumy % 2;

  if (valx && valy) {
  } else if (dfs(i + 1, sumx / 2, sumy / 2, x, y)) {
    k = k | (0 << i);
    return dp[i][rx][ry] = true;
  }

  // 1

  nx = (x >> i) & 1;
  ny = (y >> i) & 1;

  sumx = nx + rx + 1;
  sumy = ny + ry + 1;

  valx = sumx % 2;
  valy = sumy % 2;

  if (valx && valy) {
  } else if (dfs(i + 1, sumx / 2, sumy / 2, x, y)) {
    k = k | (1 << i);
    return dp[i][rx][ry] = true;
  }

  return dp[i][rx][ry] = false;
}

void solve() {
  int x, y;
  cin >> x >> y;
  dp.assign(63, vector<vector<int>>(2, vector<int>(2, -1)));
  k = 0;
  if (dfs(0, 0, 0, x, y))
    cout << k << endl;
  else
    cout << -1 << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}