// Author :- Tushar || 13-04-2025 22:39:40
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

void solve() {
  int n; 
  cin >> n; 
  vector<int> arr(n); 
  for(auto &it : arr) cin >> it; 
  vector<int> bt(32, 0); 

  for(int i = 0; i < n; i++) {
    int j = 0; 
    while(arr[i] >> j) {
      if((arr[i] >> j) & 1) bt[j]++; 
    }
  }
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int tt = 0;
  cin >> tt;
  while (tt--) {
    solve();
  }
  return 0;
}
