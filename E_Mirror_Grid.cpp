// Author :- Tushar
// Date:- 2024-04-02 23:47:27
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

int sol(vector<string>& arr, int x, int y) {
  int zeros = 0;
  int n = arr.size() - 1;

  if (arr[x][y] == '0') zeros++;
  if (arr[n - y][x] == '0') zeros++;
  if (arr[y][n - x] == '0') zeros++;
  if (arr[n - x][n - y] == '0') zeros++;

  if (zeros == 0) return 0;
  if (zeros == 1 || zeros == 3) return 1;
  if (zeros == 2) return 2;
  if (zeros == 4) return 0;
}

int32_t main() {
  letsgooooooooooo cout << fixed << setprecision(7);
  test {
    int n;
    cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    int total = 0;
    for (int i = 0; i < (n + 1) / 2; i++) {
      for (int j = i; j < n - i - 1; j++) {
        // cout << i << " " << j << " " << sol(arr, i, j) << endl;
        total += sol(arr, i, j);
      }
    }
    cout << total << endl;
  }

  return 0;
}
