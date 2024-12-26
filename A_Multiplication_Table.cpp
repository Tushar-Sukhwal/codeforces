//<<<<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>
#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define ll long long
#define no cout << "NO \n";
#define yes cout << "YES \n";
#define test      \
  lli trtyuio;    \
  cin >> trtyuio; \
  while (trtyuio--)
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  lli n, x;
  cin >> n >> x;
  lli ans = 0;
  for (lli i = 1; i <= min(n, x); i++) {
    int temp = x;
    if (x % i == 0) {
      lli a = x / i;
      if (max(a, i) <= n) {
        ans++;
      }
    }
  }
  cout << ans;

  return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>