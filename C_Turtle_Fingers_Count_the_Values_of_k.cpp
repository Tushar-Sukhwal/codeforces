#include <bits/stdc++.h>
using namespace std;
// #define int long long
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
    int a, b, l;
    cin >> a >> b >> l;
    set<int> k;

    for (int i = 0; i < 25; i++) {
      for (int j = 0; j < 25; j++) {
        if (l < static_cast<int>(pow(a, i) * pow(b, j))) break;
        if (l % static_cast<int>(pow(a, i) * pow(b, j)) == 0)
          k.insert(l / static_cast<int>(pow(a, i) * pow(b, j)));
      }
    }
    cout << k.size() << endl;
  }

  return 0;
}
