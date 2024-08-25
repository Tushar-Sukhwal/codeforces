// clang-format off
// Author :- Tushar || 26-07-2024 20:19:50
#include <bits/stdc++.h>
#ifdef LOCAL
#include "debug.h"
#else 
#define debug(x...) 42
#endif
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout << fixed << setprecision(7);
#define endl "\n" 
#define no cout << "NO \n";
#define yes cout << "YES \n";
#define int long long 
#define PI 3.1415926535897932384626433832795
const int inf = 1e9 ,INF = 1e18 ,mod1 = 998244353 ,mod = 1000000007;
// clang-format on

int32_t main() {
  fastio;
  //
  int tt;
  cin >> tt;

  while (tt--) {
    int n, q;
    cin >> n >> q;
    string s, t;
    cin >> s >> t;

    vector<pair<int, int>> queries(q);
    for (int i = 0; i < q; i++) {
      int a, b;
      cin >> a >> b;
      a--;
      b--;
      queries[i] = {a, b};
    }

    vector<vector<int>> p1(n, vector<int>(26, 0));
    vector<vector<int>> p2(n, vector<int>(26, 0));

    int a = s[0] - 'a';
    int b = t[0] - 'a';

    p1[0][a]++;
    p2[0][b]++;

    for (int i = 1; i < n; i++) {
      int a = s[i] - 'a';
      int b = t[i] - 'a';

      p1[i][a]++;
      p2[i][b]++;

      for (int j = 0; j < 26; j++) {
        p1[i][j] += p1[i - 1][j];
        p2[i][j] += p2[i - 1][j];
      }
    }

    for (auto it : queries) {
      vector<int> freq1 = p1[it.second];
      vector<int> freq2 = p2[it.second];

      if (it.first > 0) {
        for (int j = 0; j < 26; j++) {
          freq1[j] -= p1[it.first - 1][j];
          freq2[j] -= p2[it.first - 1][j];
        }
      }

      int ans = 0;
      for (int j = 0; j < 26; j++) {
        if (freq2[j] > freq1[j]) {
          ans += freq2[j] - freq1[j];
        }
      }
      cout << ans << endl;
    }
  }
  return 0;
}
