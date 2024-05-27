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
    int n, x, y;
    cin >> n >> x >> y;
    int add = n / x;
    int sub = n / y;
    int com = n / lcm(x, y);
    add = add - com;
    sub = sub - com;
    int ans =
        n * (n + 1) / 2 - (n - add) * (n - add + 1) / 2 - sub * (sub + 1) / 2;
    cout << ans << endl;
  }

  return 0;
}
