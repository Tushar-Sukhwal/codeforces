#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve() {
  int n, m, k;
  cin >> n >> m >> k;
  int a[n][m], b[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }
  for (int i = 0; i < n; i++) {
    string str;
    cin >> str;
    for (int j = 0; j < m; j++) {
      b[i][j] = str[j] - '0';
    }
  }
  ll s1 = 0;
  ll s2 = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (b[i][j] == 1)
        s1 += a[i][j];
      else
        s2 += a[i][j];
    }
  }
  ll target = abs(s1 - s2);
  if (k == 1) {
    cout << "YES\n";
    return;
  }
  set<int> st;
  for (int i = 0; i <= n - k; ++i) {
    for (int j = 0; j <= m - k; ++j) {
      int s = 0;
      for (int x = i; x < i + k; ++x) {
        for (int y = j; y < j + k; ++y) {
          if (b[x][y] == 1)
            s++;
          else
            s--;
        }
      }
      st.insert(abs(s));
    }
  }
  for (auto it : st) {
    cout << it << endl;
  }
}

int main() {
  ll t;
  cin >> t;
  while (t--) {
    int n, m, k;
    cin >> n >> m >> k;
    int a[n][m], b[n][m];
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> a[i][j];
      }
    }
    for (int i = 0; i < n; i++) {
      string str;
      cin >> str;
      for (int j = 0; j < m; j++) {
        b[i][j] = str[j] - '0';
      }
    }
    ll s1 = 0;
    ll s2 = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (b[i][j] == 1)
          s1 += a[i][j];
        else
          s2 += a[i][j];
      }
    }
    ll target = (s1 - s2);
    if (k == 1 || target == 0) {
      cout << "YES\n";
      continue;
    }
    set<int> st;
    vector<vector<int>> pre(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (i > 0) {
          pre[i][j] += pre[i - 1][j];
        }
        if (j > 0) {
          pre[i][j] += pre[i][j - 1];
        }
        pre[i][j] += b[i][j];
      }
    }
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (i >= k - 1 && j >= k - 1) {
          int num = pre[i][j];
          if (i - k >= 0) {
            num -= pre[i - k][j];
          }
          if (j - k >= 0) {
            num -= pre[i][j - k];
          }
          if (j - k >= 0 && i - k >= 0) {
            num += pre[i - k][j - k];
          }
          st.insert((k * k - num));
        }
      }
    }
    vector<int> v;
    for (auto it : st) {
      v.push_back(it);
    }
    map<int, ll> prev, curr;
    prev[0] = 1;

    for (int i = 0; i < v.size(); i++) {
      for (auto it : prev) {
        curr[it.first + v[i]] = 1;
      }
      prev = curr;
    }
    int flag = 0;
    for (auto it : prev) {
      if (it.first != 0) {
        if (target % it.first == 0) {
          flag = 1;
          break;
        }
      }
    }
    if (flag)
      cout << "YES\n";
    else {
      cout << "NO\n";
    }
  }
  return 0;
}

  