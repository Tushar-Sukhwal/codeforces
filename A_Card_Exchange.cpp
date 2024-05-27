// Author :- Tushar
// Date:- 2024-04-27 20:05:59
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
    int k;
    cin >> k;
    vector<int> arr(600, 0);
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      arr[a]++;
    }
    int flag = 0;
    for (int i = 0; i < 600; i++) {
      if (arr[i] >= k) flag = 1;
    }
    if (flag)
      cout << min(k - 1, n) << endl;
    else
      cout << n << endl;
  }

  return 0;
}
