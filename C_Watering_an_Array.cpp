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

int mini(int a, int b) {
  if (a > b) {
    return b;
  }
  return a;
}

int32_t main() {
  letsgooooooooooo cout << fixed << setprecision(7);
  test {
    int n, k, d;
    cin >> n >> k >> d;
    vector<int> a(n), b(k);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < k; i++) {
      cin >> b[i];
    }

    int maxans = 0;
    vector<int> diff(n);
    int count = 0;
    for (int i = 0; i < n; i++) {
      diff[i] = i + 1 - a[i];
      if (diff[i] == 0) count++;
    }
    maxans = count + (d - 1) / 2;
    // cout << "countini" << count << endl;

    for (int i = 0; i < mini(2000, d) - 1; i++) {
      // cout << "b0  " << b[i % k] << endl;
      for (int j = 0; j < b[i % k]; j++) {
        // for (int k = 0 ; k < diff.size(); k++) {
        //   cout << diff[k] << " ";
        // }
        // cout << endl;

        if (diff[j] == 0) {
          count--;
        }
        if (diff[j] == 1) {
          count++;
        }
        diff[j]--;
      }
      if ((count + (d - i - 2) / 2) > maxans) {
        maxans = count + (d - i - 2) / 2;
      }
    }
    cout << maxans << endl;
  }

  return 0;
}
