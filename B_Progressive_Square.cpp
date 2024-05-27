// Author :- Tushar
// Date:- 2024-04-08 22:34:45
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
    int n, c, d;
    cin >> n >> c >> d;
    map<int, int> m;
    int mini = INT_MAX;
    for (int i = 0; i < n * n; i++) {
      int a;
      cin >> a;
      m[a]++;
      mini = min(mini, a);
    }
    int flag = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (m[mini + i * c + j * d] > 0) {
          m[mini + i * c + j * d]--;
        } else {
          flag = 1;
          break;
        }
      }
    }
    if (flag) no else yes
  }

  return 0;
}
