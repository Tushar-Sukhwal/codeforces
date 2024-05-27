// Author :- Tushar
// Date:- 2024-04-10 23:23:30
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
  set<int> s;
  for (int i = 2; i < 1e3; i++) {
    int pw = i + (i * i);
    for (int j = 3;; j++) {
      s.insert(pw + 1);
      pw += pow(i, j);
      if (pw > 1e6) break;
    }
  }
  test {
    int n;
    cin >> n;
    if (s.count(n)) yes else no
  }

  return 0;
}
