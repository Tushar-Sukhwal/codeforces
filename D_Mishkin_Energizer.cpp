// Author :- Tushar || 29-03-2025 20:54:39
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
  string str;
  cin >> n >> str;

  int sl = 0, si = 0, st = 0;
  for (auto it : str) {
    if (it == 'L')
      sl++;
    else if (it == 'I')
      si++;
    else
      st++;
  }

  int maxx = max({sl, si, st});
  for (int i = maxx; i <= n; i++) {
    int m = 3 * i - n;
    if (m < 0 || m > 2 * n) continue;
    int a = i - sl;
    int b = i - si;
    int ct = i - st;
    if (a < 0 || b < 0 || ct < 0) continue;

    vector<char> temp(str.begin(), str.end());
    vector<int> ops;
    int ca = a, cb = b, ctt = ct;
    bool ans = true;

    while (ca + cb + ctt > 0) {
      bool flag = false;
      for (int j = 0; j < temp.size() - 1; j++) {
        char left = temp[j];
        char right = temp[j + 1];
        if (left == right) continue;
        char ins;
        if ((left == 'L' && right == 'I') || (left == 'I' && right == 'L'))
          ins = 'T';
        else if ((left == 'L' && right == 'T') || (left == 'T' && right == 'L'))
          ins = 'I';
        else if ((left == 'I' && right == 'T') || (left == 'T' && right == 'I'))
          ins = 'L';
        else
          continue;

        if ((ins == 'L' && ca > 0) || (ins == 'I' && cb > 0) ||
            (ins == 'T' && ctt > 0)) {
          temp.insert(temp.begin() + j + 1, ins);
          ops.push_back(j + 1);
          if (ins == 'L')
            ca--;
          else if (ins == 'I')
            cb--;
          else
            ctt--;
          flag = true;
          break;
        }
      }
      if (!flag) {
        ans = false;
        break;
      }
    }

    if (ans && ca == 0 && cb == 0 && ctt == 0) {
      cout << ops.size() << endl;
      for (int it : ops) cout << it << endl;
      return;
    }
  }

  cout << -1 << endl;
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
