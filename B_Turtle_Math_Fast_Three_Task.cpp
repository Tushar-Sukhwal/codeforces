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
    int sum = 0;
    int flag = 0;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      sum += arr[i];
      if (arr[i] % 3 == 1) flag = 1;
    }
    if (sum % 3 == 0)
      cout << 0 << endl;
    else if (sum % 3 == 2)
      cout << 1 << endl;
    else {
      if (flag)
        cout << 1 << endl;
      else
        cout << 2 << endl;
    }
  }

  return 0;
}
