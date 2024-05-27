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
    int b;
    cin >> b;
    int sum = b;
    int par = abs(b) % 2;
    int maxi = sum;
    for (int i = 1; i < n; i++) {
      cin >> b;
      if (abs(b) % 2 != par)
        sum += b;
      else
        sum = b;
      if (b > sum) sum = b;
      par = abs(b) % 2;
      maxi = max(sum, maxi);
    }
    cout << maxi << endl;
  }
  return 0;
}
