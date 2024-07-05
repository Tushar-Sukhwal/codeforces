// Author :- Tushar
// Date:- 2024-06-09 20:24:37
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
    n = n / 2;

    string str = to_string(n);
    int flag = 0;
    for (auto it : str) {
      if (it > '5') {
        flag = 1;
        break;
      }
    }
    if (flag && str[0] >= '5') yes else no
  }

  return 0;
}
