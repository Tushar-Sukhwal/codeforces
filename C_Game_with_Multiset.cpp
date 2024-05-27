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
  vector<int> arr(31, 0);
  int temp = 1;
  for (int i = 0; i < 31; i++) {
    arr[i] = temp;
    temp = temp * 2;
  }

    map<int, int> m;
  test {
    int a, b;
    cin >> a >> b;
    if (a == 1) {
      m[arr[b]]++;
    } else {
      for (int i = 30; i >= 0; i--) {
        if (b >= arr[i] && b != 0) {
          if (m.count(arr[i])) {
            b -= min(b / arr[i], m[arr[i]]) * arr[i];
          }
        }
      }
      if (b == 0) yes else no
    }
  }

  return 0;
}
