// Author :- Tushar
// Date:- 2024-04-15 12:45:34
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

int countZeros(int n) {
  int c = 0;
  while (n > 0) {
    if (n % 10 != 0) break;
    c++;
    n /= 10;
  }
  return c;
}

int countDigits(int n) {
  int c = 0;
  while (n > 0) {
    c++;
    n /= 10;
  }
  return c;
}

int32_t main() {
  letsgooooooooooo cout << fixed << setprecision(7);
  test {
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    int sum = 0;
    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
      sum += countDigits(arr[i]);
      ans[i] = countZeros(arr[i]);
    }
    sort(ans.begin(), ans.end(), greater<int>());
    for (int i = 0; i < n; i += 2) {
      sum -= ans[i];
    }
    if (sum >= (m + 1)) {
      cout << "Sasha" << endl;
    } else {
      cout << "Anna" << endl;
    }
  }
  return 0;
}
