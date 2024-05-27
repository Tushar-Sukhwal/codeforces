// Author :- Tushar
// Date:- 2024-04-06 19:19:47
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
    int a, b;
    cin >> a >> b;
    int xk, yk;
    cin >> xk >> yk;
    int xq, yq;
    cin >> xq >> yq;

    vector<int> x = {a, a, a * -1, a * -1, b, b, b * -1, b * -1};
    vector<int> y = {b, b * -1, b, b * -1, a, a * -1, a, a * -1};

    set<pair<int, int>> s;
    for (int i = 0; i < 8; i++) {
      s.insert({xk + x[i], yk + y[i]});
    }
    int count = 0;
    set<pair<int, int>> ans;
    for (int i = 0; i < 8; i++) {
      if (s.count({xq + x[i], yq + y[i]})) ans.insert({xq + x[i], yq + y[i]});
    }
    cout << ans.size() << endl;
  }

  return 0;
}
