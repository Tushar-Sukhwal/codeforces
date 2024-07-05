// Author :- Tushar
// Date:- 2024-05-31 15:35:44
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
    int l, r;
    cin >> l >> r;
    int ans = 0;
    ;

    while (pow(2, ans) < r) ans++;

    if (pow(2, ans) == r)
      cout << ans << endl;
    else
      cout << ans - 1 << endl;
  }

  return 0;
}
