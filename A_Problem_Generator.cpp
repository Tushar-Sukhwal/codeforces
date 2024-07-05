// Author :- Tushar
// Date:- 2024-06-03 20:05:45
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
    int n, m;
    cin >> n >> m;
    map<char, int> ma;
    string str;
    cin >> str;
    for (auto it : str) {
      ma[it]++;
    }
    int ans = 0;
    for (int i = 0; i < 7; i++) {
      if (ma[char('A' + i)] < m) ans += ma['A' + i] - m;
    }
    cout << abs(ans) << endl;
  }

  return 0;
}
