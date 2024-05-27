// Author :- Tushar
// Date:- 2024-04-05 18:05:35
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
    char ch;
    string str;
    cin >> n >> ch >> str;

    bool eve = false;
    bool odd = false;
    for (int i = 0; i < str.size(); i++) {
      if (str[i] != ch) {
        if ((i + 1) % 2 == 0)
          eve = true;
        else
          odd = true;
      }
    }
    int last;
    if (n % 2 == 0)
      last = n - 1;
    else
      last = n;

    if (eve == true && odd == true) {
      cout << 2 << endl << 2 << " " << last << endl;
    } else if (eve == true) {
      cout << 1 << endl << last << endl;
    } else if (odd == true) {
      cout << 1 << endl << 2 << endl;
    } else {
      cout << 0 << endl;
    }
  }

  return 0;
}
