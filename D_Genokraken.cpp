// Author :- Tushar || 02-11-2024 10:02:52
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

bool query(int a, int b) {
  cout << "? " << a << " " << b << endl;
  bool ret;
  cin >> ret;
  return ret;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> output(n, 0);

    vector<int> level2;

    int i = 2;
    map<int, int> mp;
    while (true) {
      if (!query(1, i)) {
        output[i] = 1;
        break;
      } else {
        output[i] = 0;
        level2.push_back(i);
        mp[level2.size()] = i;
      }
      i++;
    }
    

  }

  return 0;
}
