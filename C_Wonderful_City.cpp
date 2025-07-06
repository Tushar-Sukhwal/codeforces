// Author :- Tushar || 19-04-2025 20:36:48
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


vector<vector<int>> mr, mc;
vector<vector<int>> h;
vector<int> a, b;
int n;

int dpr(int i, int p) {
  if (i == n - 1) return 0;
  if (mr[i][p] != -1) return mr[i][p];

  int c0 = 1e18, c1 = 1e18;
  for (int c = 0; c < 2; c++) {
    int diff = c - p;
    bool flag = true;
    for (int j = 0; j < n; j++) {
      if ((h[i + 1][j] - h[i][j]) + diff == 0) {
        flag = false;
        break;
      }
    }
    if (flag) {
      int cost = dpr(i + 1, c);
      if (c) cost += a[i + 1];

      if (c == 0)
        c0 = min(c0, cost);
      else
        c1 = min(c1, cost);
    }
  }

  return mr[i][p] = min(c0, c1);
}

int dpc(int j, int p) {
  if (j == n - 1) return 0;
  if (mc[j][p] != -1) return mc[j][p];

  int c0 = 1e18;
  int c1 = 1e18;
  for (int c = 0; c < 2; c++) {
    int diff = c - p;
    bool flag = true;
    for (int i = 0; i < n; i++) {
      if ((h[i][j + 1] - h[i][j]) + diff == 0) {
        flag = false;
        break;
      }
    }
    if (flag) {
      int cost = dpc(j + 1, c);
      if (c) cost += b[j + 1];

      if (c == 0)
        c0 = min(c0, cost);
      else
        c1 = min(c1, cost);
    }
  }

  return mc[j][p] = min(c0, c1);
}

int sr(int n1, vector<vector<int>>& h1, vector<int>& aa) {
  if (n1 == 1) return 0;

  h = h1;
  a = aa;
  n = n1;

  mr.assign(n, vector<int>(2, -1));

  return min(dpr(0, 0), dpr(0, 1) + a[0]);
}

int sc(int n1, vector<vector<int>>& h1, vector<int>& b1) {
  if (n1 == 1) return 0;

  h = h1;
  b = b1;
  n = n1;

  mc.assign(n, vector<int>(2, -1));
  return min(dpc(0, 0), dpc(0, 1) + b[0]);
}

void solve() {
  cin >> n;
  h.assign(n, vector<int>(n));
  for (auto& it : h) {
    for (auto& itt : it) cin >> itt;
  }
  a.resize(n);
  b.resize(n);
  for (auto& it : a) cin >> it;
  for (auto& it : b) cin >> it;

  int r = sr(n, h, a);
  int c = sc(n, h, b);

  if (r >= 1e18 || c >= 1e18)
    cout << -1 << endl;
  else
    cout << r + c << endl;
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