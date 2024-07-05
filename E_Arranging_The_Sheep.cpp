// Author :- Tushar
// Date:- 2024-06-01 13:28:13
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
    string str;
    cin >> str;

    vector<int> arr1(n, 0);
    int left = 0;
    while (str[left] == '.' && left < n) left++;

    if (left == n) {
      cout << 0 << endl;
      continue;
    }
    for (int i = left; i < n; i++) {
      if (str[i] == '.') {
        arr1[i] = i - left;
        left++;
      }
    }
    vector<int> arr2(n, 0);
    int right = n - 1;
    while (str[right] == '.') right--;
    for (int i = right; i >= 0; i--) {
      if (str[i] == '.') {
        arr2[i] = max(right - i, 0LL);
        right--;
      }
    }
    // for (auto it : arr1) cout << it << " ";
    // cout << endl;
    // for (auto it : arr2) cout << it << " ";
    // cout << endl;
    int ans = 0;
    for (int i = 0; i < n; i++) {
      if (str[i] == '.') {
        ans += min(arr1[i], arr2[i]);
      }
    }
    cout << ans << endl;
  }

  return 0;
}
