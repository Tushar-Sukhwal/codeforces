// Author :- Tushar
// Date:- 2024-04-08 20:05:36
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
    int a, b;
    cin >> a >> b;
    if (b >= 2 * a)
      cout << n * a << endl;
    else {
      if (n % 2 == 0) {
        cout << (n / 2) * b << endl;
      } else {
        cout << ((n / 2) * b) + a << endl;
      }
    }
  }

  return 0;
}
