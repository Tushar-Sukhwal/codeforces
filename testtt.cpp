// clang-format off
// Author :- Tushar || 03-07-2024 17:06:58
#include <bits/stdc++.h>
#ifdef LOCAL
#include "debug.h"
#else 
#define debug(x...) 42
#endif
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout << fixed << setprecision(7);
#define endl "\n" 
#define no cout << "NO \n";
#define yes cout << "YES \n";
#define int long long 
#define PI 3.1415926535897932384626433832795
const int inf = 1e9 ,INF = 1e18 ,mod1 = 998244353 ,mod = 1000000007;
// clang-format on

vector<int> dp(1e6 + 1, -1);
vector<int> self(1e6 + 1, -1);

vector<int> printDivisors(int n) {
  vector<int> fact;
  for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      fact.push_back(i);
      if (i != n / i) {
        fact.push_back(n / i);
      }
    }
  }
  debug(fact, n);
  return fact;
}

int possibleBySelf(int n) {
  if (n < 3) return 0;

  if (self[n] != -1) return self[n];

  vector<int> fact = printDivisors(n);
  int ans = 0;

  for (int i = 0; i < fact.size(); i++) {
    if (fact[i] > (n / fact[i]) && (fact[i] + (n / fact[i])) % 2 == 0) {
      ans++;
    }
  }
  debug("self", n, ans);
  if (ans) {
    return self[n] = ans;
  }
  return 0;
}

int recc(int n) {
  if (n < 3) return 0;

  if (dp[n] != -1) return dp[n];

  vector<int> fact = printDivisors(n);

  int ans = 0;
  for (int i = 0; i < fact.size(); i++) {
    if (fact[i] < n) {
      ans += possibleBySelf(fact[i]);
    }
    if (fact[i] > (n / fact[i]) && (fact[i] + (n / fact[i])) % 2 == 0) {
      ans++;
    }
  }
  debug(ans, n);
  return dp[n] = ans;
}

int32_t main() {
  fastio;

  int n = 1e4;  // Set n to 1e6 to process numbers from 1 to 1e6
  for (int i = 1; i <= n; i++) {
    recc(i);
  }

  ofstream outfile("output.txt");
  outfile << "{";
  for (int i = 0; i <= n; i++) {
    outfile << dp[i];
    if (i != n) {
      outfile << ",";
    }
  }
  outfile << "}" << endl;
  outfile.close();

  return 0;
}
