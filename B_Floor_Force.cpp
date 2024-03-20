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

  vector<int> arr(6, 0);

  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if (a == 1) {
      arr[1]++;
    } else {
      if (arr[a - 1] > 0) {
        arr[a]++;
        arr[a - 1]--;
      }
    }
  }
  cout << arr[5];

  return 0;
}
