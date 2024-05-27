// Author :- Tushar
// Date:- 2024-04-07 12:55:05
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

void primeFactors(int n, unordered_map<int, int>& m) {
  // Print the number of 2s that divide n
  while (n % 2 == 0) {
    m[2]++;
    n = n / 2;
  }

  // n must be odd at this point. So we can skip
  // one element (Note i = i +2)
  for (int i = 3; i <= sqrt(n); i = i + 2) {
    // While i divides n, print i and divide n
    while (n % i == 0) {
      m[i]++;
      n = n / i;
    }
  }

  // This condition is to handle the case when n
  // is a prime number greater than 2
  if (n > 2) m[n]++;
}

int32_t main() {
  letsgooooooooooo cout << fixed << setprecision(7);
  test {
    int n;
    cin >> n;
    vector<int> arr(n);
    int maxi = 0;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      if (arr[i] > maxi) maxi = arr[i];
    }
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++) {
      primeFactors(arr[i], m);
    }
    int flag = 0;
    for (const auto& pair : m) {
      if (pair.second % n == 0) {
      } else {
        flag = 1;
        break;
      }
    }
    if (flag) no else yes
  }

  return 0;
}
