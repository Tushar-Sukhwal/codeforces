// clang-format off
// Author :- Tushar || 06-08-2024 20:13:51
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

#define PI 3.1415926535897932384626433832795

/*
    ∧＿∧
　 (｡･ω･｡)つ━☆・*。
  ⊂/　 /　   ・゜
　しーＪ　　　     °。+ * 。　
　　　　　                .・゜
  */
// clang-format on

int32_t main() {
  fastio;
  //
  int tt;
  cin >> tt;
  while (tt--) {
    int n, s, m;
    cin >> n >> s >> m;
    vector<pair<int, int>> arr(n);

    for (int i = 0; i < n; i++) {
      cin >> arr[i].first;
      cin >> arr[i].second;
    }
    sort(arr.begin(), arr.end());
    int flag = 0;

    int last = 0;
    int maxx = 0;

    for (int i = 0; i < n; i++) {
      maxx = max(maxx, arr[i].first - last);
      last = arr[i].second;
    }
    maxx = max(maxx , m - last);

    if (maxx >= s) flag = 1;

    if (flag) yes else no
  }

  return 0;
}
