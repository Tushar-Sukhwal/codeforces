// clang-format off
// Author :- Tushar
//Date:- 2024-07-02 10:47:08
#include <bits/stdc++.h>
#define int long long n

using namespace std ; 
int32_t main() {
  letsgooooooooooo cout << fixed << setprecision(7);
  test {
    int n, m;
    cin >> n >> m;
    string sa, sb;
    cin >> sa >> sb;

    int ans = -1;
    int count = 0;
    for (int i = n - m; i >= 0; i--) {
      if (sa[i] == '0') {
        ans = count;
        break;
      }
      count++;
    }
    if (ans != -1)
      cout << n - m - ans << endl;
    else
      cout << ans << endl;
  }
  return 0;
}
