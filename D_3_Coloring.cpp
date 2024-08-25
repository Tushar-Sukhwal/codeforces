// clang-format off
// Author :- Tushar || 30-07-2024 11:00:14
#include <bits/stdc++.h>
#ifdef LOCAL
#include "debug.h"
#else 
#define debug(x...) 42
#endif
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout << fixed << setprecision(7);
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

void output(queue<pair<int, int>>& q, int a) {
  auto curr = q.front();
  q.pop();

  cout << a << " " << curr.first + 1 << " " << curr.second + 1 << " " << endl;
}

int32_t main() {
  fastio;
  //
  int n;
  cin >> n;

  queue<pair<int, int>> a, b;

  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      for (int j = 0; j < n; j += 2) {
        a.push({i, j});
      }
    } else {
      for (int j = 1; j < n; j += 2) {
        a.push({i, j});
      }
    }
  }
  for (int i = 0; i < n; i++) {
    if (i % 2 == 1) {
      for (int j = 0; j < n; j += 2) {
        b.push({i, j});
      }
    } else {
      for (int j = 1; j < n; j += 2) {
        b.push({i, j});
      }
    }
  }

  for (int i = 0; i < n * n; i++) {
    int x;
    cin >> x;
    if (a.empty()) {
      if (x == 1) output(b, 2);
      if (x == 2) output(b, 3);
      if (x == 3) output(b, 2);
    } else if (b.empty()) {
      if (x == 1) output(a, 3);
      if (x == 2) output(a, 1);
      if (x == 3) output(a, 1);
    } else {
      if (x == 2) output(a, 1);
      if (x == 1) output(b, 2);
      if (x == 3) output(a, 1);
    }
  }
  return 0;
}
