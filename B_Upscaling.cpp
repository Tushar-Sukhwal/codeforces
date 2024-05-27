// Author :- Tushar
// Date:- 2024-03-28 20:17:53
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
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if ((i + j) % 2 == 0)
          cout << "##";
        else
          cout << "..";
      }
      cout << endl;
      for (int j = 0; j < n; j++) {
        if ((i + j) % 2 == 0)
          cout << "##";
        else
          cout << "..";
      }
      cout << endl;
    }
  }

  return 0;
}
