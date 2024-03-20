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

    int count = 0;
    for (int i = 1; i < str.size(); i++) {
      if (str[i] == '*' && str[i - 1] == '*') {
        break;
      }
      if (str[i] == '@') count++;
    }
    cout << count << endl;
  }

  return 0;
}
