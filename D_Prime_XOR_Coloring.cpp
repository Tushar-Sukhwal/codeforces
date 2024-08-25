#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAX_N = 1e5;

vector<bool> is_prime;
vector<int> count_pairs;

void sieve_and_count() {
  is_prime.assign(MAX_N + 1, true);
  count_pairs.assign(MAX_N + 1, 0);
  is_prime[0] = is_prime[1] = false;

  for (int i = 2; i <= MAX_N; ++i) {
    if (is_prime[i]) {
      for (int j = i * i; j <= MAX_N; j += i) {
        is_prime[j] = false;
      }
      for (int a = 0; a <= MAX_N; ++a) {
        int b = a ^ i;
        if (b > a && b <= MAX_N) {
          count_pairs[max(i, b)]++;
        }
      }
    }
  }

  for (int i = 1; i <= MAX_N; ++i) {
    count_pairs[i] += count_pairs[i - 1];
  }
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  sieve_and_count();

  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    cout << count_pairs[n] << '\n';
  }

  return 0;
}