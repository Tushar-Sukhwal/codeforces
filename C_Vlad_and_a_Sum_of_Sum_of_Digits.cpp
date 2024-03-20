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

int func(int n) {
  if (n % 10 == 0) {
    return (n * (n + 1)) / 2;
  }
  int a = n % 10;
  return a * (a + 1) / 2 + 10 * func(n / 10);
}

int32_t main() {
  letsgooooooooooo cout << fixed << setprecision(7);

  test {
    int n;
    cin >> n;

    cout << func(n) << endl;
    string str;
  }

  return 0;
}
