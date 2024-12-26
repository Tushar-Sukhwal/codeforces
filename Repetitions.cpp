// Author :- Tushar || 08-09-2024 11:10:12
#include <bits/stdc++.h>
#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 42
#endif
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

  string str; 
  cin >> str; 

  int n = str.size(); 
  int i = 0; 
  int ans = 0; 
  
  while(i < n) {
    int count = 1; 
    i++; 
    while(i < n && str[i] == str[i-1]) {
      count++; 
      i++; 
    }
    ans = max(ans, count); 
  }
  cout << ans << endl; 

  return 0;
}


