// clang-format off
// Author :- Tushar || 13-08-2024 20:35:21
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

int getsum(int l, int r, vector<int>& pre) {
  if (l == 0) return pre[r];

  return pre[r] - pre[l - 1];
}

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
    string str;
    cin >> str;

    vector<int> pre(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
      sum += arr[i];
      pre[i] = sum;
    }
    debug(pre);
    deque<int> a, b;
    for (int i = 0; i < n; i++) {
      if (str[i] == 'L') a.push_back(i);
      if (str[i] == 'R') b.push_front(i);
    }
    int i = 0, j = 0;
    int ans = 0;
    while (i < a.size() && j < b.size()) {
      if (a[i] < b[i]) ans += getsum(a[i], b[i], pre);
      i++;
      j++;
    }
    cout << ans << endl;
  }

  return 0;
}
