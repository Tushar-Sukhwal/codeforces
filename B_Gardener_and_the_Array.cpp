// Author :- Tushar
// Date:- 2024-04-11 13:11:14
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
    vector<vector<int>> arr(n);
    map<int, int> m;
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      for (int j = 0; j < a; j++) {
        int b;
        cin >> b;
        arr[i].push_back(b);
        m[b]++;
      }
    }
    bool ans = true;
    for (int i = 0; i < n; i++) {
      int flag = 0;
      for (auto it : arr[i]) {
        if (m[it] == 1) flag = 1;
      }
      if (!flag) {
        ans = false;
        break;
      }
    }
    if (ans) no else yes
  }

  return 0;
}
