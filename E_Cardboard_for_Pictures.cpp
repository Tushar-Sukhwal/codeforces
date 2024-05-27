#include <bits/stdc++.h>
using namespace std;

#define int long long

int check(vector<int>& arr, int n, int target) {
  int sum = 0;
  for (int i = 0; i < arr.size(); i++) {
    sum += (arr[i] + (2 * n)) * (arr[i] + (2 * n));
  }
  if (sum < target) return -1;
  if (sum > target) return 1;
  return 0;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int T;
  cin >> T;
  while (T--) {
    int n, c;
    cin >> n >> c;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    int low = 0, high = LLONG_MAX, mid, result = 0;
    while (low <= high) {
      mid = ((high - low) / 2) + low;
      int checkResult = check(arr, mid, c);
      if (checkResult == 0) {
        result = mid;
        break;
      } else if (checkResult == 1) {
        high = mid - 1;
      } else {
        low = mid + 1;
      }
    }

    cout << result << "\n";
  }

  return 0;
}
