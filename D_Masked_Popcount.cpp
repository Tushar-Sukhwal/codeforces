// Author :- Tushar
// Date:- 2024-06-01 19:00:29
#include <bits/stdc++.h>
using namespace std;

#define letsgooooooooooo            \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

unsigned long long countSetBits(unsigned long long n, int k) {
  // Total number of bits set in positions less than k
  unsigned long long total = 0;

  // Each block of size (1ULL << (k+1)) has (1ULL << k) bits set at position k
  unsigned long long blockSize = 1ULL << (k + 1);
  unsigned long long completeBlocks = (n + 1) / blockSize;
  total += completeBlocks * (1ULL << k);

  // Count remaining bits in the last incomplete block
  unsigned long long remaining = (n + 1) % blockSize;
  if (remaining > (1ULL << k)) {
    total += remaining - (1ULL << k);
  }

  return total;
}

int32_t main() {
  letsgooooooooooo cout << fixed << setprecision(7);
  long long int n, m;
  cin >> n >> m;

  long long int ans = 0;
  long long int i = 0;
  while (m) {
    if (m & 1) {
      ans = (ans + countSetBits(n, i)) % 998244353;
    }
    i++;
    m = m >> 1;
    // cout << "m->" << m << " ans-> " << countSetBits(n, i) << endl;
  }
  cout << ans;
  return 0;
}
