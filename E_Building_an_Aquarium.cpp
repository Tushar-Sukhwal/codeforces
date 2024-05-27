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
// const ll mod = 1000000007;
// const ll mod = 998244353;

int water(vector<int>& arr, int n) {
  int sum = 0;
  for (int i = 0; i < arr.size(); i++) {
    if (n > arr[i]) sum += n - arr[i];
  }
  return sum;
}

int32_t main() {
  letsgooooooooooo cout << fixed << setprecision(7);
  test {
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    int low = 0;
    int high = 10e9;

    while (low <= high) {
      int mid = (low + high) / 2;
      if (water(arr, mid) > x) {
        high = mid - 1;
      } else {
        low = mid + 1;
      }
    }
    cout << high << endl;
  }

  return 0;
}
