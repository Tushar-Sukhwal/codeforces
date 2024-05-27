// Author :- Tushar
// Date:- 2024-04-27 20:30:47
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
    set<int> s;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      s.insert(arr[i]);
    }
    sort(arr.begin(), arr.end());

    int curr = 0;

    int prev = 0;
    for (curr = 0; curr < n; curr++) {
      if (arr[curr] - prev > 1) {
        break;
      }
      prev = arr[curr];
    }

    if (curr == n) {
      if (s.size() % 2 == 0) {
        cout << "Bob" << endl;
      } else {
        cout << "Alice" << endl;
      }
    } else if (n == 1 || curr % 2 == 0 || s.size() == 1) {
      cout << "Alice" << endl;
    } else {
      cout << "Bob" << endl;
    }
  }

  return 0;
}
