#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int tt;
  cin >> tt;
  while (tt--) {
    int l, r, g;
    cin >> l >> r >> g;

    l = (l + g - 1) / g;
    r = r / g;

    if (l > r) {
      cout << -1 << " " << -1 << endl;
      continue;
    }

    if (l == r) {  // Only one valid multiple
      if (__gcd(l * g, l * g) == g) {
        cout << l * g << " " << r * g << endl;
      } else {
        cout << -1 << " " << -1 << endl;
      }
      continue;
    }

    // Find the largest pair
    cout << l * g << " " << r * g << endl;
  }

  return 0;
}
