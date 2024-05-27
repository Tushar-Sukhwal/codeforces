// Author :- Tushar
// Date:- 2024-04-13 20:26:58
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
  test {
    int n;
    cin >> n;
    int sum = 0;
    vector<vector<int>> arr(n, vector<int>(n));
    vector<pair<int, int>> ans;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        arr[i][j] = j + 1;
      }
      ans.push_back({1, i + 1});
    }
    for (int j = 0; j < n / 2; j++) {
      for (int i = 0; i < n; i++) {
        arr[i][j] = i + 1;
      }
      ans.push_back({2, j + 1});
    }
    for (int i = 0; i < n; i++) {
      arr[0][i] = i + 1;
    }
    ans.push_back({1, 1});
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        sum += arr[i][j];
      }
    }
    cout << sum << " " << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++) {
      cout << ans[i].first << " " << ans[i].second << " ";
      for (int j = 0; j < n; j++) {
        cout << j + 1 << " ";
      }
      cout << endl;
    }
  }

  return 0;
}
