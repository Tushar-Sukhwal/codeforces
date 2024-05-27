// Author :- Tushar
// Date:- 2024-04-29 20:16:31
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
    string str;
    cin >> str;
    int i = 0;
    while (i < str.size() && str[i] == '0') i++;
    if (i == str.size()) {
      cout << 0 << endl;
      continue;
    }

    int j = i;
    int count = 0;
    while (j < str.size()) {
      if (str[j] != '0')
        ;
      else {
        count += j - i + 1;
        i++;
      }
      j++;
    }
    cout << count << endl;
  }

  return 0;
}


