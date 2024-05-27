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
  test {
    int n, k;
    cin >> n >> k;
    int sum = 0, maxi = 0;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
      int aa;
      cin >> aa;
      sum += aa;
      a[i] = sum;
    }
    for (int i = 0; i < n; i++) {
      int aa;
      cin >> aa;
      maxi = max(maxi, aa);
      b[i] = maxi;
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
      if (i >= k) break;
      ans = max(ans, a[i] + (k - i -1 ) * b[i]);
    }
    cout << ans << endl;
  }

  return 0;
}
