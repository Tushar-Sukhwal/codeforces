// Author :- Tushar || 05-04-2025 20:28:09
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
  cin >> n;
  vector<int> a(n), b(n);
  for (auto &it : a) cin >> it;
  for (auto &it : b) cin >> it;

  vector<pair<int, int>> print;
  map<int, map<int, set<int>>> mp;
  if (n % 2) {
    int center = 0;

    int flg = 0;
    for (int i = 0; i < n; i++) {
      if (a[i] == b[i]) {
        center = i;
        flg = 1;
        break;
      }
    }
    if (flg == 0) {
      cout << -1 << endl;
      return;
    }

    if (n / 2 != center) print.push_back({n / 2, center});
    swap(a[n / 2], a[center]);
    swap(b[n / 2], b[center]);
    center = n / 2;
    map<int, map<int, set<int>>> mp;
    for (int i = 0; i < n; i++) {
      if (i != center) {
        mp[a[i]][b[i]].insert(i);
      }
    }
    // ind, ind
    vector<pair<int, int>> ans;
    set<int> st;
    st.insert(center);
    for (int i = 0; i < n; i++) {
      if (!st.count(i)) {
        mp[a[i]][b[i]].erase(i);
        if (mp.count(b[i]) && mp[b[i]].count(a[i]) &&
            mp[b[i]][a[i]].size() > 0) {
          ans.push_back({i, *mp[b[i]][a[i]].begin()});
          st.insert(*mp[b[i]][a[i]].begin());
          mp[b[i]][a[i]].erase(mp[b[i]][a[i]].begin());
        } else {
          cout << -1 << endl;
          return;
        }
      }
    }
    deque<int> ret;
    ret.push_back(n / 2);
    for (auto it : ans) {
      if (it.first < it.second) {
        ret.push_front(it.first);
        ret.push_back(it.second);
      } else {
        ret.push_back(it.first);
        ret.push_back(it.second);
      }
    }
    for (int i = 0; i < n; i++) {
      if (ret[i] == i) continue;
      while (ret[i] != i) {
        print.push_back({i, ret[i]});
        swap(ret[i], ret[ret[i]]);
      }
    }
    cout << print.size() << endl;
    cout << print.front().first + 1 << " " << print.front().second + 1 << endl;
    if (print.size() == 1) {
      cout << endl;
      return;
    }
    for (int i = print.size() - 1; i > 0; i--) {
      cout << print[i].first + 1 << " " << print[i].second + 1 << endl;
    }

    return;
  }
  for (int i = 0; i < n; i++) {
    mp[a[i]][b[i]].insert(i);
  }
  vector<pair<int, int>> ans;
  set<int> st;

  for (int i = 0; i < n; i++) {
    if (!st.count(i)) {
      mp[a[i]][b[i]].erase(i);
      if (mp.count(b[i]) && mp[b[i]].count(a[i]) && mp[b[i]][a[i]].size() > 0) {
        ans.push_back({i, *mp[b[i]][a[i]].begin()});
        st.insert(*mp[b[i]][a[i]].begin());
        mp[b[i]][a[i]].erase(mp[b[i]][a[i]].begin());
      } else {
        cout << -1 << endl;
        return;
      }
    }
  }
  deque<int> ret;
  for (auto it : ans) {
    if (it.first < it.second) {
      ret.push_front(it.first);
      ret.push_back(it.second);
    } else {
      ret.push_back(it.first);
      ret.push_back(it.second);
    }
  }
  for (int i = 0; i < n; i++) {
    if (ret[i] == i) continue;
    while (ret[i] != i) {
      print.push_back({i, ret[i]});
      swap(ret[i], ret[ret[i]]);
    }
  }
  cout << print.size() << endl;
  for (auto it : print) cout << it.first + 1 << " " << it.second + 1 << endl;
  return;
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
