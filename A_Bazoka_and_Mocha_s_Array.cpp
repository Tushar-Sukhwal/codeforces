// Author :- Tushar
// Date:- 2024-05-25 20:06:16
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
    set<int> temp;

    int last = arr[0];
    int flag = 0;
    for (int i = 1; i < n; i++) {
      if (arr[i] == arr[0]) continue;
      if (temp.count(arr[i])) {
        if (last != arr[i]) {
          flag = 1;
          break;
        }
      } else {
        temp.insert(arr[i]);
      }
      last = arr[i];
    }
    int i = 0;
    int j = n - 1;
    while (arr[i] == arr[0] && i < n) i++;
    while (arr[j] == arr[0] && j >= 0) j--;
    // cout << i << j << endl;
    if (i == n) {
    } else {
      while (i <= j) {
        if (arr[i] == arr[0]) {
          flag = 1;
          break;
        }
        i++;
      }
    }
    if (flag) no else yes
  }

  return 0;
}
