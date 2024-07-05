// Author :- Tushar
// Date:- 2024-06-11 20:19:18
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
    int flag = 0;
    int i;
    int maxx = 0;
    for (i = 0; i < n; i++) {
      maxx = max(arr[i], maxx);

      sum += arr[i];
      if (maxx == sum - maxx) {
        flag++;
      }
    }

    cout << flag << endl;
  }

  return 0;
}
