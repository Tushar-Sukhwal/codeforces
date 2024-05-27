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
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    int j = 1;
    while (1) {
      bool one = false, zero = false;
      for (int i = 0; i < n; i++) {
        if ((arr[i] & j) > 0)
          one = true;
        else
          zero = true;
      }
      if (one && zero) {
        j = j << 1;
        cout << j << endl;
        break;
      }
      j = j << 1;
    }
  }

  return 0;
}
