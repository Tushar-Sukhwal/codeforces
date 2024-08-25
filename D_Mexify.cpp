#include <bits/stdc++.h>
using namespace std;

int32_t main() {
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    if (n == 3)
      cout << 3 << endl;
    else if (n == 4)
      cout << 7 << endl;
    else {
      cout << (n - 2) * 3 + 4 << endl;
    }
  }
  return 0;
}
