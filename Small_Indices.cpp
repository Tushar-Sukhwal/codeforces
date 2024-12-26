#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve() {
  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    vector<int> A(N + 1), B(N + 1);
    for (int i = 1; i <= N; i++) cin >> A[i];
    for (int i = 1; i <= N; i++) cin >> B[i];

    // DP arrays
    vector<int> dpA(N + 1, 0), dpB(N + 1, 0);

    for (int i = 3; i <= N; i++) {
      // Initialize max small indices for both choices
      dpA[i] = dpA[i - 1];
      dpB[i] = dpB[i - 1];

      // Check all valid (j, k) pairs
      for (int j = 1; j < i; j++) {
        for (int k = j + 1; k < i; k++) {
          if (A[i] <= A[j] + A[k])
            dpA[i] = max(dpA[i], 1 + max(dpA[j], dpB[j]));
          if (A[i] <= B[j] + B[k])
            dpA[i] = max(dpA[i], 1 + max(dpA[j], dpB[j]));
          if (B[i] <= A[j] + A[k])
            dpB[i] = max(dpB[i], 1 + max(dpA[j], dpB[j]));
          if (B[i] <= B[j] + B[k])
            dpB[i] = max(dpB[i], 1 + max(dpA[j], dpB[j]));
        }
      }
    }

    // Output the result for this test case
    cout << max(dpA[N], dpB[N]) << endl;
  }
}

int32_t main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
