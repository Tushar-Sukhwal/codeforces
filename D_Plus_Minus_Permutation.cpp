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

int summ(int n) { return ((n) * (n + 1)) / 2; }

int gcd(int a, int b) {
  // Find Minimum of a and b
  int result = min(a, b);
  while (result > 0) {
    if (a % result == 0 && b % result == 0) {
      break;
    }
    result--;
  }

  // Return gcd of a and b
  return result;
}

int32_t main() {
  letsgooooooooooo cout << fixed << setprecision(7);
  test {
    int n, x, y;
    cin >> n >> x >> y;

    int t = n - (n / x) + (n/gcd(x, y)) ;
    int m = n / y - (n/gcd(x, y)) ;

    cout << t << " " << m << endl;
    cout << summ(n) - summ(t) - summ(m) << endl;
  }

  return 0;
}
