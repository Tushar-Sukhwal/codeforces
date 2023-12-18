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

int32_t main() {
  letsgooooooooooo cout << fixed << setprecision(7);
  test {
    int n;
    cin >> n;
    vector<int> arr1(n), arr2(n);
    vector<pair<int, int>> arr3;
    for (int i = 0; i < n; i++) {
      cin >> arr1[i];
    }
    for (int i = 0; i < n; i++) {
      cin >> arr2[i];
      int temp = arr1[i] - arr2[i];
      arr3.push_back({temp, i + 1});
    }
    sort(arr3.begin(), arr3.end());
    vector<int> arr4;
    for (int i = n - 1; i >= 0; i--) {
      if (arr3[i].first == arr3[n - 1].first) {
        arr4.push_back(arr3[i].second);
      } else
        break;
    }
    cout << arr4.size();
    sort(arr4.begin(), arr4.end());
    cout << endl;
    for (int i = 0; i < arr4.size(); i++) {
      cout << arr4[i] << " ";
    }
    cout << endl;
  }

  return 0;
}
