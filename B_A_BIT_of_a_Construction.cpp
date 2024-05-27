// Author :- Tushar
// Date:- 2024-04-21 20:11:26
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
    int n, k;
    cin >> n >> k;
    int ans = 0;
    for (int i = 0; i < 33; i++) {
      if ((int)pow(2, i) - 1 <= k) ans = i;
    }
    if (n == 1) {
      cout << k << endl;
      continue;
    }
    cout << (int)pow(2, ans) - 1 << " ";
    cout << k - ((int)pow(2, ans) - 1) << " ";
    for (int i = 0; i < n - 2; i++) cout << 0 << " ";
    cout << endl;
  }

  return 0;
}
