// Author :- Tushar
// Date:- 2024-06-11 20:10:39
#include <bits/stdc++.h>
using namespace std;
#define int int
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
    int x, y, k;
    cin >> x >> y >> k;

    while (x != 1) {
      if (k <= 0) break;
      int temp = y;
      temp -= (x % y);

      int inc = temp;
      if (inc >= k) {
        inc = k;
      }
      x += inc;
      k -= inc;

      while (x % y == 0) {
        x /= y;
      }
    }

    x += k % (y - 1);
    cout << x << endl;
  }
  return 0;
}
