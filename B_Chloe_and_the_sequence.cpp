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

  int n, k;
  cin >> n >> k;
  if (k % 2) {
    cout << "1";
    return 0;
  }
  while (1) {
    int num = (int)log2(k);
    if (pow(2, num) == k) {
      break;
    }
    k = k - pow(2, num);
  }
  cout << 1 + (int)log2(k);

  return 0;
}
