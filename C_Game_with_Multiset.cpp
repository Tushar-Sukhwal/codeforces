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

// Assume 32 bit decimal number
string DecimalToBinaryString(int a) {
  string binary = "";
  int mask = 1;
  for (int i = 0; i < 31; i++) {
    if ((mask & a) >= 1)
      binary = "1" + binary;
    else
      binary = "0" + binary;
    mask <<= 1;
  }
  cout << binary << endl;
  return binary;
}

int32_t main() {
  letsgooooooooooo cout << fixed << setprecision(7);
  map<int, int> m;
  for (int i = 0; i < 30; i++) {
    m[i] = 0;
  }
  test {
    int a, b;
    cin >> a >> b;
    if (a = 1) {
      m[b]++;
    } else {
      string str = DecimalToBinaryString(b);
      int flag = 0;
      for (int i = 0; i < 32; i++) {
        if (m[i] == 0 && (str[31 - i]) == 1) {
          flag = 1;
        }
      }
      if (flag) {
        nobrea
      } else {
        yes
      }
    }
  }

  return 0;
}
