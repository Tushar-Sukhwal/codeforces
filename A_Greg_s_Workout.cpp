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

  int n;
  cin >> n;
  int chest = 0, biceps = 0, back = 0;

  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if (i % 3 == 0)
      chest += a;
    else if (i % 3 == 1)
      biceps += a;
    else
      back += a;
  }

  if (chest == max({chest, biceps, back})) cout << "chest";
  if (biceps == max({chest, biceps, back})) cout << "biceps";
  if (back == max({chest, biceps, back})) cout << "back";

  return 0;
}
