// Author :- Tushar
// Date:- 2024-05-22 21:23:22
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
    for (int i = 0; i < n; i++) cin >> arr[i];

    int sum = 0;
    int last = 0;
    for (int i = 1; i < n - 1; i++) {
      if (arr[i] < max(arr[0], arr[n - 1])) {
        sum += (i - last) * max(arr[last], arr[i]);
        last = i;
      }
    }
    sum += (n - last - 1) * max(arr[last], arr[n - 1]);
    cout << sum << endl;
  }

  return 0;
}
