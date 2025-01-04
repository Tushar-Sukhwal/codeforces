// Author :- Tushar || 29-12-2024 10:27:16
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

// nodes, sum
set<pair<int, int>> jj;

pair<int, int> func(int r, int k, int flag) {
  if (r < k) return {0, 0};

  if (r % 2 == 0) {
    return func((r + 1) / 2, k, 0);
  } else {
    auto ans = func((r + 1) / 2 - 1, k, 0);

    if (flag) return ans;

    int currNode = ans.first + 1;
    int currAns = (ans.second + (r + 1) / 2) * 2 + (r + 1) * currNode;
    jj.insert({currNode * 2, currAns});
    return {currNode * 2, currAns};
  }
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

    cout << func(n, k, 1).second + n / 2 + 1 << endl;

    for (auto it : jj) {
      cout << it.first << " " << it.second << endl;
    }
  }

  return 0;
}
