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
    int n, a, q;
    cin >> n >> a >> q;
    string str;
    cin >> str;
    int curr = a;
    int flag = 0;
    int plus = 0;
    if(curr == n ) flag = 1 ; 
    for (int i = 0; i < str.size(); i++) {
      if (str[i] == '-') {
        curr--;
      } else {
        curr++;
        plus++;
      }
      if (curr == n) {
        flag = 1;
        break;
      }
    }
    if (flag) {
      cout << "YES" << endl;
    } else if (plus + a >= n) {
      cout << "MAYBE" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
