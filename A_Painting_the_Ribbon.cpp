// Author :- Tushar
// Date:- 2024-04-12 20:08:11
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
    int n, m, k;
    cin >> n >> m >> k;
    int temp;
    if (n % m == 0)
      temp = n / m;
    else
      temp = (n / m) + 1;

    if (n - temp > k) yes else no
  }

  return 0;
}
