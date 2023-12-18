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
    int a, b, n;
    cin >> a >> b >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    int sum = 0;
    int greater = 0;
    sum += b;
    for (int i = 0; i < n; i++) {
      if (arr[i] < a) {
        sum += arr[i];
      } else {
        sum += a - 1;
      }
    }
    cout<<sum<<endl ; 
  }

  return 0;
}
