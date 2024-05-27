// Author :- Tushar
// Date:- 2024-03-28 21:43:43
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
    int a, b, c;
    cin >> a >> b >> c;
    int h1 = ceil(log2(a + 1));
    int last = a - pow(2, h1 - 1) + 1;
    int seclast = pow(2, h1 - 2) - ceil((double)last / (double)2);
    if (last % 2 != 0) seclast += 1;
    cout << last << " " << seclast << endl;
  }

  return 0;
}
