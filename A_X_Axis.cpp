// Author :- Tushar
// Date:- 2024-06-23 20:20:51
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
    int a, b, c;
    cin >> a >> b >> c;

    int mini = INT_MAX;
    int ans = 0;
    for (int i = -10; i < 20; i++) {
      if (abs(a - i) + abs(b - i) + abs(c - i) <= mini) {
        mini = abs(a - i) + abs(b - i) + abs(c - i);
        ans = i;
      }
    }
    cout << ans << endl;
  }

  return 0;
}
