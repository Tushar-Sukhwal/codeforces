// Author :- Tushar
// Date:- 2024-05-27 20:34:20
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
    int n, x, y, a;
    cin >> n >> x >> y;

    for (int i = 0; i < n; i++) {
      cin >> a;
      x += a;
    }
    string ans = (x % 2 == y % 2) ? "Alice" : "Bob";
    cout << ans << endl;
  }
  return 0;
}
