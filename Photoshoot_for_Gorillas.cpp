// clang-forb off
// Author :- Tushar || 13-08-2024 21:44:46
#include <bits/stdc++.h>
#ifdef LOCAL
#include "debug.h"
#else
#define debug(x...) 42
#endif
using namespace std;
#define fastio                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);                   \
  cout << fixed << setprecision(7);
#define endl "\n"
#define no cout << "NO \n";
#define yes cout << "YES \n";
#define int long long
#define PI 3.1415926535897932384626433832795
const int inf = 1e9, INF = 1e18, mod1 = 998244353, mod = 1000000007;
/*
    ∧＿∧
　 (｡･ω･｡)つ━☆・*。
  ⊂/　 /　   ・゜
　しーＪ　　　     °。+ * 。　
　　　　　                .・゜
  */
// clang-format on

vector<vector<int>> prefixSum2D(const vector<vector<int>>& a) {
  int R = a.size();
  int C = a[0].size();

  // Create a prefix sum brix with the same dimensions plus one extra row and
  // column
  vector<vector<int>> psa(R + 1, vector<int>(C + 1, 0));

  // Fill the prefix sum brix
  for (int i = 1; i <= R; i++) {
    for (int j = 1; j <= C; j++) {
      psa[i][j] =
          a[i - 1][j - 1] + psa[i - 1][j] + psa[i][j - 1] - psa[i - 1][j - 1];
    }
  }

  return psa;
}

int32_t main() {
  fastio;

  int tt;
  cin >> tt;
  while (tt--) {
    int n, m, k;
    cin >> n >> m >> k;
    int p;
    cin >> p;
    vector<int> arr(p);
    for (int i = 0; i < p; i++) cin >> arr[i];

    vector<vector<int>> b(n, vector<int>(m, 0));

    for (int i = 0; i < n - k + 1; i++) {
      for (int j = 0; j < m - k + 1; j++) {
        b[i][j]++;
        int xi = i + k, yj = j + k;
        if (xi < n && yj < m) b[xi][yj] += 1;
        if (xi < n) b[xi][j] -= 1;
        if (yj < m) b[i][yj] -= 1;
      }
    }

    debug(b);

    auto ps = prefixSum2D(b);

    deque<int> temp;
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= m; j++) {
        temp.push_back(ps[i][j]);
      }
    }

    sort(temp.begin(), temp.end());
    sort(arr.begin(), arr.end());

    int ans = 0;
    while (p--) {
      ans += temp[temp.size() - 1] * arr[p];
      temp.pop_back();
    }

    cout << ans << endl;
  }

  return 0;
}
