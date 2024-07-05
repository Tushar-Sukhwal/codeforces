// Author :- Tushar
// Date:- 2024-06-01 09:29:08
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
    int x;
    cin >> x;

    cout << 31 << endl;
    for (int i = 0; i < 32; i++) {
      cout << ((x >> i) & 1) << " ";
    }
    cout << endl;
  }

  return 0;
}
