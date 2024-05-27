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

vector<int> printDivisors(int n) {
  vector<int> arr;
  for (int i = 1; i <= sqrt(n); i++) {
    if (n % i == 0) {
      if (n / i == i)
        arr.push_back(i);
      else {
        arr.push_back(i);
        arr.push_back(n / i);
      }
    }
  }
  return arr;
}

int32_t main() {
  letsgooooooooooo test {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int count = LLONG_MAX;
    vector<int> divisors = printDivisors(n);

    for (int div : divisors) {
      int l = 0;
      for (int j = 0; j < div; j++) {
        int mxi = 0, total = 0;
        map<int, int> m;
        for (int k = j; k < n; k += div) {
          m[s[k] - 'a']++;
          mxi = max(mxi, m[s[k] - 'a']);
          total++;
        }
        l += (total - mxi);
      }
      if (l <= 1) {
        count = min(count, div);
      }
    }
    cout << (count != LLONG_MAX ? count : -1) << endl;
  }

  return 0;
}
