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
    int n, x;
    cin >> n >> x;
    deque<int> d1(n), d2(n), d3(n);
    for (int i = 0; i < n; i++) {
      cin >> d1[i];
    }
    for (int i = 0; i < n; i++) {
      cin >> d2[i];
    }
    for (int i = 0; i < n; i++) {
      cin >> d3[i];
    }
    int curr = 0;
    while (1) {
      if (x == (x | d1[0]) && d1.size()) {
        curr = curr | d1[0];
        d1.pop_front();
      } else if (x == (x | d2[0]) && d2.size()) {
        curr = curr | d2[0];
        d2.pop_front();
      } else if (x == (x | d3[0]) && d3.size()) {
        curr = curr | d3[0];
        d3.pop_front();
      } else {
        break;
      }
    }
    if (curr == x) yes else no
  }

  return 0;
}

// (d1.size() && x == (x | d1[0]))
// (d1.size() && x == x | d1[0])