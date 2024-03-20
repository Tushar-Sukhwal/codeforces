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
    vector<int> arr(n);
    vector<int> pre(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      sum += arr[i];
      pre[i] = sum;
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
      int l, u;
      cin >> l >> u;
      int temp = lower_bound(pre.begin()+l, pre.end(), u-pre[l-1]) - pre.begin();
      // cout<<pre[temp]<<" ";
      cout<<temp<<" ";
    }
    cout << endl;
  }

  return 0;
}
