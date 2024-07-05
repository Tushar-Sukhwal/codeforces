// Author :- Tushar
// Date:- 2024-06-11 20:10:39
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

void func(int a, int b, int c, int& ways, int x, int y, int z) {
  if (a <= x && b <= y && c <= z) {
    ways = max(ways, (x - a + 1) * (y - b + 1) * (z - c + 1));
  }
}

int32_t main() {
  letsgooooooooooo cout << fixed << setprecision(7);

  test {
    int x, y, z, k;
    cin >> x >> y >> z >> k;
    int ways = 0;

    for (int a = 1; a * a * a <= k; ++a) {
      if (k % a == 0) {
        int ab = k / a;
        for (int b = 1; b * b <= ab; ++b) {
          if (ab % b == 0) {
            int c = ab / b;
            func(a, b, c, ways, x, y, z);
            func(a, c, b, ways, x, y, z);
            func(b, a, c, ways, x, y, z);
            func(b, c, a, ways, x, y, z);
            func(c, a, b, ways, x, y, z);
            func(c, b, a, ways, x, y, z);
          }
        }
      }
    }
    cout << ways << endl;
  }

  return 0;
}
