// Author :- Tushar || 08-09-2024 10:50:55
#include <bits/stdc++.h>
#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 42
#endif
#define int long long
using namespace std;
/*
    ∧＿∧
　 (｡･ω･｡)つ━☆・*。
  ⊂/　 /　   ・゜
　しーＪ　　　     °。+ * 。　
　　　　　                .・゜
*/

/*
Problem Statement

Let there be N workers and N jobs. Any worker can be assigned to perform any
job, incurring some cost that may vary depending on the work-job assignment. It
is required to perform all jobs by assigning exactly one worker to each job and
exactly one job to each agent in such a way that the total cost of the
assignment is minimized.

Input Format
Number of workers and job: N
Cost matrix C with dimension N*N where C(i,j) is the cost incurred on assigning
ith Person to jth Job.

Sample Input
4

[
9 2 7 8
6 4 3 7
5 8 1 8
7 6 9 4
]

Sample Output
13

Constraints
N <= 20

*/

int solve(int i, int mask, int& n) {
  if (i == n + 1) return 0;

  if (dp[i][mask] != -1) return dp[i][mask];

	for(int j = 0; j < n; j++) {
		
	}
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  vector<vector<int>> cost(n + 1, vector<int>(n + 1, 0));
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> cost[i][j];
    }
  }

  vector<vector<int>> dp(n + 1, vector<int>(1 << (n + 1), -1));

  return 0;
}
