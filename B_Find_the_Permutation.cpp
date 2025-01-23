// Author :- Tushar || 18-01-2025 22:14:17
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

vector<string> arr;

bool comp(int a, int b) { return arr[a][b] == '0'; }

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    arr.resize(n);
    for (auto &it : arr) cin >> it;
    vector<int> ans(n);

    for (int i = 0; i < n; i++) ans[i] = i;

    sort(ans.begin(), ans.end(), comp);

    for (auto it : ans) cout << it + 1 << " ";
    cout << endl;
  }

  return 0;
}
