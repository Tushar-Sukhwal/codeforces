// Author :- Tushar || 05-02-2025 20:09:55
#include <bits/stdc++.h>
#define int long long
using namespace std;
/*
    ∧＿∧
　 (｡･ω･｡)つ━☆・*。
  ⊂/　 /　   ・゜
　しーＪ　　　     °。+ * 。　
　　　　　                .・゜
*/

int score(vector<int>& arr) {
  int ans = 1;
  int ret = 1;
  for (int i = 1; i < arr.size(); i++) {
    if (arr[i] >= arr[i - 1])
      ans++;
    else {
      ans = 1;
    }
      ret = max(ans, ret);
  }
  return ret; 
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int tt;
  cin >> tt;
  while (tt--) {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (auto& it : arr) cin >> it;

    int ans = 1; 
    for(int i = 0; i < n; i++) {
      arr[i] = arr[i] * k; 
      ans = max(ans, score(arr)); 
      arr[i] = arr[i] / k; 
    }
    cout << ans << endl; 
  }

  return 0;
}
