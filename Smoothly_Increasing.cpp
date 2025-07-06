// Author :- Tushar || 19-03-2025 20:39:54
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

bool verify(vector<int>& arr) {
  if (arr.size() == 1) return true;
  for (int i = 1; i < arr.size(); i++) {
    if (arr[i] <= arr[i - 1]) return false;
  }

  vector<int> diff;
  for (int i = 1; i < arr.size(); i++) {
    diff.push_back(arr[i] - arr[i - 1]);
  }

  return verify(diff);
}

void solve() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (auto& it : arr) cin >> it;

  if (n > 32) {
    for (int i = 0; i < n; i++) cout << 0;
    cout << endl;
    return;
  }

  for (int i = 0; i < n; i++) {
    vector<int> temp;
    for (int j = 0; j < n; j++) {
      if (i != j) temp.push_back(arr[j]);
    }
    cout << verify(temp);
  }
  cout << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int tt;
  cin >> tt;
  while (tt--) {
    solve();
  }

  return 0;
}
