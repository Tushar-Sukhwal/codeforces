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
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    int odd = 0;
    int even = 0;
    set<int> s;
    s.insert(0);

    int flag = 0;
    for (int i = 0; i < n; i++) {
      if (i % 2 == 0) {
        even += arr[i];
      } else {
        odd += arr[i];
      }

      if (s.find(odd - even) != s.end()) {
        flag = 1;
      } else {
        s.insert(odd - even);
      }
    }
    if (flag) yes else no
  }

  return 0;
}
