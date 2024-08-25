// clang-format off
// Author :- Tushar || 04-08-2024 20:40:32
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
bool check(vector<int>& arr, int a, int k) {
  for (auto it : arr) {
    if ((a - it) / k % 2 != 0) return false;
  }
  return true;
}

int32_t main() {
  fastio;
  //
  int tt;
  cin >> tt;
  while (tt--) {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    sort(arr.begin(), arr.end());
    int a = arr[n - 1];

    int flag = 0;
    for (int i = a; i < a + k; i++) {
      if (check(arr, i, k)) {
        cout << i << endl;
        flag = 1;
        break;
      }
    }
    if (!flag) cout << -1 << endl;
  }

  return 0;
}
  
