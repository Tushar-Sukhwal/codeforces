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
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    int curr = INT_MAX;
    for (int i = 0; i < q; i++) {
      int a;
      cin >> a;
      if (a < curr) {
        for (int i = 0; i < n; i++) {
          if (arr[i] % (int)pow(2, a) == 0) arr[i] += (int)pow(2, a - 1);
        }
        curr = a;
      }
    }
    for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
    }
    cout << endl;
  }

  return 0;
}
