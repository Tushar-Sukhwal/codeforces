// Author :- Tushar || 20-01-2025 20:37:26
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
    vector<int> v;
    map<int, int> freq;

    for (int i = 0; i < n; i++) {
      int num;
      cin >> num;
      freq[num]++;
      if (freq[num] >= 4) v.resize(4, num);
    }

    if (v.size() == 0) {
      int temp = 0;
      for (auto it : freq) {
        if (it.second >= 2) {
          temp = max(temp, it.first);
        }
      }

      if (temp) {
        v.push_back(temp);
        v.push_back(temp);
        freq[temp] -= 2;

        int prev = -1;
        for (auto it : freq) {
          if (it.second == 0) continue;
          if (it.second >= 2) {
            v.push_back(it.first);
            v.push_back(it.first);
            break;
          }
          if (prev != -1 && abs(it.first - prev) < temp * 2) {
            v.push_back(prev);
            v.push_back(it.first);
            break;
          }
          prev = it.first;
        }
      }
    }

    if (v.size() != 4)
      cout << -1;
    else
      for (int i = 0; i < 4; i++) cout << v[i] << " ";

    cout << endl;
  }
  return 0;
}