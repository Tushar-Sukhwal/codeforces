
#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(int n, int q) {
  vector<int> arr(n);
  vector<int> sum(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    if (i == 0) {
      sum[i] = arr[i];
    } else {
      sum[i] = sum[i - 1] + arr[i];
    }
  }

  for (int i = 0; i < q; i++) {
    int l, r, k;
    long long res = sum[n - 1];
    cin >> l >> r >> k;
    if (l > 1) {
      res = res - (sum[r - 1] - sum[l - 2]);
    } else {
      res = res - (sum[r - 1]);
    }
    res = res + ((r - l + 1) * k);
    if (res % 2 == 1) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}

int32_t main() {
  int t;
  cin >> t;
  while (t--) {
    int n, q;
    cin >> n >> q;
    solve(n, q);
  }
}