// Author :- Tushar
// Date:- 2024-03-28 20:15:23
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
    if (a < b && b < c)
      cout << "STAIR" << endl;
    else if (a < b && b > c)
      cout << "PEAK" << endl;
    else
      cout << "NONE" << endl;
  }

  return 0;
}
