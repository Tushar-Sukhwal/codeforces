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

void fillpair(int n, int &res) { res = n * (n - 1) / 2; }

void fill_map(int n, vector<int> &a, map<int, vector<int>> &mp) {
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    mp[a[i]].push_back(i);
  }
}

void calclast(int n, vector<int> &a, map<int, vector<int>> &mp,
              vector<int> &v) {
  int lst = -1;
  for (int i = 0; i < n; i++) {
    auto it =
        lower_bound(mp[a[i]].begin(), mp[a[i]].end(), i) - mp[a[i]].begin();
    it--;
    if (it != -1) {
      lst = max(lst, mp[a[i]][it] + 1);
    }
    v[i] = lst;
  }
}

void pairs(int n, vector<int> &a, map<int, vector<int>> &mp, vector<int> &v,
           int &res) {
  int lst = INT_MAX;
  sort(v.begin(), v.end());
  for (int i = n - 1; i >= 0; i--) {
    auto it =
        upper_bound(mp[a[i]].begin(), mp[a[i]].end(), i) - mp[a[i]].begin();
    if (it != mp[a[i]].size()) {
      lst = min(lst, mp[a[i]][it] - 1);
    }
    auto up_it = upper_bound(v.begin(), v.end(), lst) - v.begin();
    int cnt = n - up_it;
    res -= cnt;
  }
}

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  map<int, vector<int>> mp;
  int res;

  fillpair(n, res);
  fill_map(n, a, mp);
  vector<int> v(n);
  calclast(n, a, mp, v);
  pairs(n, a, mp, v, res);

  cout << res << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}