// clang-format off
// Author :- Tushar || 11-08-2024 20:42:25
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
/*
    ∧＿∧
　 (｡･ω･｡)つ━☆・*。
  ⊂/　 /　   ・゜
　しーＪ　　　     °。+ * 。　
　　　　　                .・゜
  */
// clang-format on

int binaryExpo(int base, int exp) {
  int result = 1;
  while (exp > 0) {
    if (exp % 2 == 1) {
      result *= base;
    }
    base *= base;
    exp /= 2;
  }
  return result;
}

int dist(pair<int, int> a, pair<int, int> b) {
  int x = binaryExpo((a.first - b.first), 2);
  x += binaryExpo((a.second - b.second), 2);

  return x;
}

int32_t main() {
  fastio;
  //
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i].first >> arr[i].second;

    pair<int, int> s, e;
    cin >> s.first >> s.second >> e.first >> e.second;

    int flag = 1;

    for (auto it : arr) {
      if (dist(it, e) <= dist(s, e)) {
        flag = 0;
        break;
      }
    }

    if (flag) yes else no
  }

  return 0;
}
