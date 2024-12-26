// Author :- Tushar || 19-12-2024 20:42:41
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
    int n, k;
    cin >> n >> k;
    int l = 1, r = n;
    deque<int> ans;
    int i = 1; 

    while (l <= r) {
      if(i % k == 0) {
        ans.push_back(l); 
        l++; 
      } else {
        ans.push_back(r); 
        r--; 
      }
      i++; 
    }
    for(auto it : ans) cout << it << " "; 
    cout << endl; 
  }

  return 0;
}
