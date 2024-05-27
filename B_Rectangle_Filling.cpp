// Author :- Tushar
// Date:- 2024-04-27 20:14:16
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
    int n, m;
    cin >> n >> m;
    vector<string> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    int flag = 0;
    if (arr[0][0] == arr[n - 1][m - 1]) {
      flag = 1;
    } else {
      int flag1 = 0;
      int flag2 = 0;
      int temp1 = 0;
      int temp2 = 0;
      for (int i = 1; i < n; i++) {
        if (arr[i][0] != arr[0][0]) {
          flag1 = 1;
        }
      }
      for (int i = 0; i < m; i++) {
        if (arr[0][i] != arr[0][0]) {
          flag2 = 1;
        }
      }
      if (flag1 && flag2) {
        flag = 1;
      }
      for (int i = n - 2; i >= 0; i--) {
        if (arr[i][m - 1] != arr[n - 1][m - 1]) temp1 = 1;
      }
      for (int i = m - 2; i >= 0; i--) {
        if (arr[n - 1][i] != arr[n - 1][m - 1]) temp2 = 1;
      }
      if (temp1 && temp2) {
        flag = 1;
      }
    }

    if (flag) yes else no
  }

  return 0;
}
