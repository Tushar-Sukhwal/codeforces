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
    int a = n * (n - 1) / 2;
    vector<int> arr(a);
    for (int i = 0; i < a; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    vector<int> ans;
    int temp = 0;
    for (int i = n - 1; i > 0; i--) {
      ans.push_back(arr[temp]);
      for (int j = 0; j < i; j++) {
        temp++;
      }
    }
    ans.push_back(ans.back());
    for (int i = 0; i < ans.size(); i++) {
      cout << ans[i] << " ";
    }
    cout << endl;
  }

  return 0;
}
