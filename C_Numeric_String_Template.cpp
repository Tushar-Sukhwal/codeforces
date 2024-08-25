// clang-format off
// Author :- Tushar || 13-08-2024 20:24:50
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

int32_t main() {
  fastio;
  //
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
      string str;
      cin >> str;
      map<char, int> mp;
      int flag = 0;

      if (str.size() != n)
        flag = 1;
      else {
        for (int j = 0; j < n; j++) {
          if (mp.count(str[j])) {
            if (mp[str[j]] == arr[j]) {
            } else {
              flag = 1;
              break;
            }
          } else {
            mp[str[j]] = arr[j];
          }
        }
        map<int, char> pm;
        for (int j = 0; j < n; j++) {
          if (pm.count(arr[j])) {
            if (pm[arr[j]] == str[j]) {
            } else {
              flag = 1;
              break;
            }
          } else {
            pm[arr[j]] = str[j];
          }
        }
      }

      if (flag) no else yes
    }
  }

  return 0;
}
