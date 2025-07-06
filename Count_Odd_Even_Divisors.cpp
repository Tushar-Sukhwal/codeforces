// Author :- Tushar || 02-07-2025 20:00:52
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

vector<int> printDivisors(int n) {
  vector<int> divisors;

  // Note that this loop runs till square root
  for (int i = 1; i <= sqrt(n); i++) {
    if (n % i == 0) {
      // If divisors are equal, print only one
      if (n / i == i) {
        divisors.push_back(i);
      }
      // Otherwise print both
      else {
        divisors.push_back(i);
        divisors.push_back(n / i);
      }
    }
  }

  return divisors;
}

void solve() {
  int n;
  cin >> n;

  auto div = printDivisors(n); 
  int e = 0, o = 0; 

  for(auto it : div) {
    if(it % 2 == 0) e++; 
    else o++; 
  }
  cout << o << " " << e << endl; 
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
