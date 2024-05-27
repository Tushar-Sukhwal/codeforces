// Author :- Tushar
// Date:- 2024-04-15 13:08:46
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
    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<int> temp;
    int curr = arr[0];
    for (int i = 1; i < n; i++) {
      if (arr[i] > curr)
        temp.push_back(arr[i]);
      else {
        curr = min(curr, arr[i]);
      }
    }
    int count = 0;
    for (int i = 1; i < temp.size(); i++) {
      if (arr[i - 1] < arr[i]) count++;
    }
    cout << count << endl;
  }

  return 0;
}
