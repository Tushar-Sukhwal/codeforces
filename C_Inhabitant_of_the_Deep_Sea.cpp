// Author :- Tushar
// Date:- 2024-04-08 22:50:22
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
    vector<int> arr(n);
    int total = 0;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      total += arr[i];
    }

    int a = 0, b = 0;

    int sum = 0;

    for (int i = 0; i < n; i++) {
      sum += arr[i];
      if (sum <= (k + 1) / 2) a = i;
    }
    sum = 0;
    for (int i = n - 1; i >= 0; i--) {
      sum += arr[i];
      if (sum <= k / 2) b = n - i;
    }

    if (total <= k) {
      cout << n << endl;
      continue;
    }
    if (arr[0] > (k + 1) / 2) a = -1;
    if (a + b > n)
      cout << n << endl;
    else
      cout << a + b + 1 << endl;
  }

  return 0;
}
