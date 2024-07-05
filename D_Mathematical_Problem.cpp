#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define MOD 1000000007

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  if (n == 2) {
    if (s[0] == '0') {
      cout << s[1] << endl;
    } else {
      cout << s << endl;
    }
    return;
  }

  bool hasZero = false;
  for (auto ch : s) {
    if (ch == '0') {
      hasZero = true;
      break;
    }
  }

  if (hasZero) {
    if (n >= 4) {
      cout << 0 << endl;
    } else {
      if (s[1] == '0') {
        int first = s[0] - '0';
        int third = s[2] - '0';
        int result = min(first + third, first * third);
        cout << result << endl;
      } else {
        cout << 0 << endl;
      }
    }
    return;
  }

  int minSum = 1e18;
  for (int gapIndex = 0; gapIndex < n - 1; gapIndex++) {
    vector<int> nums;
    for (int i = 0; i < n; i++) {
      if (i == gapIndex) {
        string val = "";
        val = val + s[i] + s[i + 1];
        i++;
        nums.push_back(stoi(val));
      } else {
        string val = "";
        val = val + s[i];
        nums.push_back(stoi(val));
      }
    }

    int curSum = nums[0];
    if (curSum == 1) {
      curSum = 0;
    }

    for (int i = 1; i < nums.size(); i++) {
      if (nums[i] == 1) continue;
      curSum += nums[i];
    }

    minSum = min(minSum, curSum);
  }

  cout << minSum << endl;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}
