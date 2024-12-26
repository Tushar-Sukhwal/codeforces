// Author :- Tushar || 23-11-2024 19:04:42
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

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    map<int,int> mp; 
    for(auto it : arr) mp[it]++; 
    int ans = 0; 
    for(auto it : mp) {
      ans += it.second / 2; 
    }
    cout << ans << endl; 
  }

  return 0;
}
