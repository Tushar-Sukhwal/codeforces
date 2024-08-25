// clang-format off
// Author :- Tushar || 28-07-2024 20:47:30
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
const int inf = 1e9 ,INF = 1e18 ,mod1 = 998244353 ,mod = 100000000;

/*
    ∧＿∧
　 (｡･ω･｡)つ━☆・*。
  ⊂/　 /　   ・゜
　しーＪ　　　     °。+ * 。　
　　　　　                .・゜
　　　　　                ゜｡ﾟﾟ･｡･ﾟﾟ。
　　　　                  　ﾟ。　 　｡ﾟ
                           　ﾟ･｡･ﾟ
*/



// clang-format on

int32_t main() {
  fastio;
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    vector<int> ans;
    int minn = INT_MAX;
    int maxx = INT_MIN;
    for (auto it : arr) {
      maxx = max(maxx, it);
      minn = min(minn, it);
    }
    int i = 0;
    int flag = 0;
    for (; i < 41; i++) {
      if (maxx == 0 && minn == 0) {
        flag = 1;
        break;
      }
      int avg = (minn + maxx) / 2;
      ans.push_back(avg);
      for (int j = 0; j < arr.size(); j++) {
        arr[j] = abs(arr[j] - avg);
      }
      minn = INT_MAX;
      maxx = INT_MIN;
      for (auto it : arr) {
        maxx = max(maxx, it);
        minn = min(minn, it);
      }
    }
    if (flag) {
      cout << i << endl;
      for (int it : ans) cout << it << " ";
      cout << endl;
    } else {
      cout << -1 << endl;
    }
  }
  return 0;
}