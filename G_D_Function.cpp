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
const int MOD = 1e9 + 7;

vector<int> digitSums;

void precomputeDigitSums() {
  digitSums.assign(100, 0);
  digitSums[0] = 0;
  for (int i = 1; i < 100; ++i) {
    digitSums[i] = (digitSums[i / 10] + i % 10) % MOD;
  }
}

int sumOfDigits(int n) {
  if (n < 100) return digitSums[n];
  int sum = 0;
  while (n > 0) {
    sum = (sum + n % 10) % MOD;
    n /= 10;
  }
  return sum;
}

int countValidNumbers(int l, int r, int k) {
  int count = 0;
  for (int i = l; i < r; ++i) {
    if (sumOfDigits(k * i) == (k * sumOfDigits(i)) % MOD) {
      count++;
    }
  }
  return count;
}

int32_t main() {
  letsgooooooooooo cout << fixed << setprecision(7);

  precomputeDigitSums();

  test {
    int l, r, k;
    cin >> l >> r >> k;
    int result = countValidNumbers(l, r, k);
    cout << result << endl;
  }

  return 0;
}
