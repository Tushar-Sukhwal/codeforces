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
    vector<int> arr(n, 0);

    for (int i = 0; i < n - 1; i++) {
      int a, b;
      cin >> a >> b;
      arr[a - 1]++;
      arr[b - 1]++;
    }
    int count = 0;
    for (int i = 0; i < n ; i++) {
      if (arr[i] == 1) count++;

    }

    if (count % 2 == 0) {
      cout << count / 2 << endl;
    } else {
      cout << (count / 2) + 1 << endl;
    }
  }

  return 0;
}
