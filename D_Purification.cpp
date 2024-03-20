#include <bits/stdc++.h>
using namespace std;
#define int long long
#define letsgooooooooooo            \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);
#define test         \
  int Tushars_07;    \
  cin >> Tushars_07; \
  while (Tushars_07--)
#define endl "\n"
#define no cout << "NO \n";
#define yes cout << "YES \n";
// const ll mod = 1000000007;
// const ll mod = 998244353;

int32_t main() {
  letsgooooooooooo cout << fixed << setprecision(7);
  int n;
  cin >> n;
  vector<string> arr;
  for (int i = 0; i < n; i++) {
    string a;
    cin >> a;
    arr.push_back(a);
  }
  vector<pair<int, int>> ans;
  vector<int> row(n, 0), col(n, 0);
  for (int i = 0; i < n; i++) {
    if (arr[i][i] == '.') {
      row[i] = 1;
      col[i] = 1;
      ans.push_back(make_pair(i + 1, i + 1));
    }
  }
  for (int i = 0; i < n; i++) {
    if (row[i] == 0) {
      for (int j = 0; j < n; j++) {
        if (arr[i][j] == '.' && col[j] == 0) {
          row[i] = 1;
          col[j] = 1;
          ans.push_back(make_pair(i + 1, j + 1));
          break;
        }
      }
    }
  }
  for (int j = 0; j < n; j++) {
    if (col[j] == 0) {
      for (int i = 0; i < n; i++) {
        if (arr[i][j] == '.' && row[i] == 0) {
          row[i] = 1;
          col[j] = 1;
          ans.push_back(make_pair(i + 1, j + 1));
          break;
        }
      }
    }
  }
  int flag = 0;
  for (int i = 0; i < n; i++) {
    if (row[i] == 0 || col[i] == 0) {
      flag = 1;
    }
  }

  if (flag)
    cout << -1;
  else {
    for (int i = 0; i < ans.size(); i++) {
      cout << ans[i].first << " " << ans[i].second << endl;
    }
  }
  return 0;
}
