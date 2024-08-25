// clang-format off
// Author :- Tushar || 04-08-2024 20:14:23
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
    priority_queue<int, vector<int>, greater<int>> pq;

    int eve = 0;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      if (arr[i] % 2 == 0) {
        eve++;
        pq.push(arr[i]);
      }
    }
    if (eve == n || eve == 0) {
      cout << 0 << endl;
      continue;
    }
    sort(arr.begin(), arr.end());
    int j = n - 1;
    while (arr[j] % 2 == 0) j--;

    int temp = arr[j];
    int count = 0;

    while (!pq.empty() && pq.top() < temp) {
      int curr = pq.top();
      pq.pop();
      temp += curr;
      count++;
    }
    if (!pq.empty()) {
      cout << count + 1 + pq.size() << endl;
    } else {
      cout << count << endl;
    }
  }

  return 0;
}