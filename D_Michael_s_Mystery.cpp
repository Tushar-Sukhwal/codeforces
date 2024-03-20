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
#define ll long long
// const ll mod = 1000000007;
// const ll mod = 998244353;

ll expo(ll a, ll b, ll mod) {
  ll res = 1;
  while (b > 0) {
    if (b & 1) res = (res * a) % mod;
    a = (a * a) % mod;
    b = b >> 1;
  }
  return res;
}

void solve() {
  int l, r, m;
  cin >> l >> r >> m;
  int ans = 0;
  if ((l & 1) == 0) {
    l--;
    ans -= expo(2, l >> 1, m);
    if (ans < 0) ans += m;
  }
  if ((r & 1) == 1) {
    ans -= expo(2, r >> 1, m);
    if (ans < 0) ans += m;
    r++;
  }
  int n = (r - l + 1) >> 1;
  int sum = expo(2, l >> 1, m) * (expo(2, n, m) - 1) % m * 2;
  cout << (ans + sum) % m << endl;
}

int32_t main() {
  letsgooooooooooo cout << fixed << setprecision(7);
  int n;
  cin >> n;

  while (n--) {
    solve();
  }

  return 0;
}
