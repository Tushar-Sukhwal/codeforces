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

int countValuesLessThanK(set<int>& s, int k) {}

int32_t main() {
  letsgooooooooooo cout << fixed << setprecision(7);
  test {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    set<int> s;
    for (int i = 1; i < n; i++) {
      if (arr[i] - arr[i - 1]) s.insert(arr[i] - arr[i - 1]);
    }
    auto it = lower_bound(s.begin(), s.end(), n);

    cout << distance(s.begin(), it) << endl;
  }

  return 0;
}
