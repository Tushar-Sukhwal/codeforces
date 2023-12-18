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
  int n;
  cin >> n;
  string str;
  cin >> str;
  int small = 0, big = 0;
  for (int i = 0; i < n; i++) {
    if (str[i] == 'x')
      small++;
    else
      big++;
  }

  if (big > small) {
    int ans = big - n / 2;
    cout << ans << endl;
    for (int i = 0; i < n; i++) {
      if (ans > 0 && str[i] == 'X') {
        cout << 'x';
        ans--;
      } else {
        cout << str[i];
      }
    }
  } else if (small > big) {
    int ans = small - n / 2;
    cout << ans << endl;
    for (int i = 0; i < n; i++) {
      if (ans > 0 && str[i] == 'x') {
        cout << 'X';
        ans--;
      } else {
        cout << str[i];
      }
    }
  } else {
    cout << 0 << endl;
    cout << str << endl;
    return 0;
  }

  return 0;
}
