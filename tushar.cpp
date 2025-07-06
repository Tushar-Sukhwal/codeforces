// Author :- Tushar || 10-02-2025 19:20:37
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

class parent {
 public:
  int a;
  parent() { cout << "parent constructor"; }
};

class child : parent {
 public:
  int b;
  child() { cout << "child constructor"; }
};

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  child();

  return 0;
}
