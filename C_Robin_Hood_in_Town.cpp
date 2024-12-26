// Author :- Tushar || 21-09-2024 20:36:03
#include <bits/stdc++.h>
#define int long long
using namespace std;

int chk(int x, const vector<int>& a, int s, int n, int mx) {
  int ns = s + x;
  double avg = (double)ns / n;
  double ha = avg / 2;
  int uc = 0;

  for (int i = 0; i < n; i++) {
    if (a[i] < ha) uc++;
  }

  if (mx + x < ha) uc++;

  return uc > n / 2;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    int s = 0, mx = 0;

    for (int i = 0; i < n; i++) {
      cin >> a[i];
      s += a[i];
      mx = max(mx, a[i]);
    }

    if (n <= 2) {
      cout << -1 << '\n';
      continue;
    }

    int lo = 0, hi = 1e12, ans = -1;
    while (lo <= hi) {
      int mid = (lo + hi) / 2;
      if (chk(mid, a, s, n, mx)) {
        ans = mid;
        hi = mid - 1;
      } else {
        lo = mid + 1;
      }
    }

    cout << ans << '\n';
  }

  return 0;
}
