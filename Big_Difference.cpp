// Author :- Tushar || 19-03-2025 20:13:02
#include <bits/stdc++.h>
#define int long long 
using namespace std;
/*
    ∧＿∧
　 (｡･ω･｡)つ━☆・*。
  ⊂/　 /　   ・゜
　しーＪ　　　     °。+ * 。　
　　　　　                .・゜
*/

const int MAX = 1e7;
vector<bool> isPrime(MAX + 1, true);
vector<int> primes;

void sieve() {
  isPrime[0] = isPrime[1] = false;
  for (int i = 2; i * i <= MAX; i++) {
    if (isPrime[i]) {
      for (int j = i * i; j <= MAX; j += i) {
        isPrime[j] = false;
      }
    }
  }
  for (int i = 2; i <= MAX; i++) {
    if (isPrime[i]) primes.push_back(i);
  }
}

int gcd(int a, int b) {
  while (b) {
    int t = b;
    b = a % b;
    a = t;
  }
  return a;
}

int lcm(int a, int b) { return (a / gcd(a, b)) * b; }

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  sieve();

  int tt;
  cin >> tt;

  while (tt--) {
    int n, k;
    cin >> n >> k;

    if (n < MAX) {
      int idx =
          upper_bound(primes.begin(), primes.end(), n) - primes.begin() - 1;
      if (idx > 0) {
        int p1 = primes[idx];
        int p2 = primes[idx - 1];

        if (abs(p1 - p2) >= k && abs(1 - p1 * p2) >= 2 * k) {
          cout << p1 << " " << p2 << "\n";
          continue;
        }
      }
    }

    bool found = false;
    if (n > k) {
      int a = n;
      int b = n - k;
      int g = gcd(a, b);
      int l = lcm(a, b);

      if (abs(g - l) >= 2 * k) {
        cout << a << " " << b << "\n";
        found = true;
      }
    }

    if (!found) {
      for (int i = 2; i <= min(n, 100000LL); i++) {
        if (i * i > n) break;
        int j = i * (k + 1);
        if (j <= n && abs(i - j) >= k && abs(i - i * j) >= 2 * k) {
          cout << i << " " << j << "\n";
          found = true;
          break;
        }
      }
    }

    if (!found) cout << "-1 -1\n";
  }

  return 0;
}
