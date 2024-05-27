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
#define no cout << "NO\n";
#define yes cout << "YES\n";

int func(int n) {
  while (n > 0) {
    int temp = n % 10;
    if (temp == 0 or temp == 1) {
      n /= 10;
    } else {
      return 0;
    }
  }
  return 1;
}

int32_t main() {
  letsgooooooooooo cout << fixed << setprecision(7);
  vector<int> pre;
  for (int i = 1; i <= 1e5 + 5; i++) {
    if (func(i) == 1) {
      pre.push_back(i);
    }
  }

  test {
    int n;
    cin >> n;
    int len = pre.size() - 1;

    while (n > 0 and len > -1) {
      if (n % pre[len] == 0 and pre[len] != 1) {
        n = n / pre[len];
      } else {
        len--;
      }
    }
    if (n >= 2) no else yes
  }

  return 0;
}
