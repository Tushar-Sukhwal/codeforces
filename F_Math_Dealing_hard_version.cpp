// clang-format off
#include <bits/stdc++.h>
// #include"debug.h"
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout << fixed << setprecision(7);

const int MAXN = 1e6 + 1;
vector<int> dp(MAXN, -1);
vector<int> self(MAXN, -1);
vector<vector<int>> divisors(MAXN);

void precomputeDivisors() {
  for (int i = 1; i < MAXN; i++) {
    for (int j = i; j < MAXN; j += i) {
      divisors[j].push_back(i);
    }
  }
} 
int possibleBySelf(int n) {
  if (n < 3) return 0;

  if (self[n] != -1) return self[n];

  int ans = 0;
  for (int i = 0; i < divisors[n].size(); i++) {
    int fact = divisors[n][i];
    if (fact > (n / fact) && (fact + (n / fact)) % 2 == 0) {
      ans++;
    }
  }

  return self[n] = ans ? ans : 0;
}

int recc(int n) {
  if (n < 3) return 0;

  if (dp[n] != -1) return dp[n];

  int ans = 0;
  for (int i = 0; i < divisors[n].size(); i++) {
    int fact = divisors[n][i];
    if (fact < n) {
      ans += possibleBySelf(fact);
    }
    if (fact > (n / fact) && (fact + (n / fact)) % 2 == 0) {
      ans++;
    }
  }

  return dp[n] = ans;
}

void precomputeResults() {
  for (int i = 1; i < MAXN; i++) {
    recc(i);
  }
}

int32_t main() {
  fastio;

  precomputeDivisors();
  precomputeResults();

  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;

    if(dp[a] != -1 )
    cout << dp[a] << " ";
    else cout<<0<<" ";
  }    

  // debug(dp) ; 

  return 0;
}

