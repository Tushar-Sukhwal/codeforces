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
    set<int> s;
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      s.insert(a);
    }
    auto it = s.begin();
    if (*it == 0) it++;
    int i = 1;
    while (1) {
      if (*it == i) {
        it++;
        i++;
      } else
        break;
    }

    int j = *it;
    while (1) {
      if (*it == j) {
        it++;
        j++;
      } else
        break;
    }
    it = s.begin();

    if (*it == 0) {
      cout << i;

      int a;
      cin >> a;
      cout << 0;
      cin >> a ; 
    } else {
      cout << 0;
      int a ; cin >> a ; 
    }
  }

  return 0;
}
