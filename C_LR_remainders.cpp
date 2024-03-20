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
    int n, m;
    cin >> n >> m;
    deque<int> arr(n);
    int pro = 1;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      pro *= arr[i];
    }
    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
      if (str[i] == 'L') {
        cout << pro % m << " ";
        pro = pro / arr[0];
        arr.pop_front();

      } else {
        cout << pro % m << " ";
        pro = pro / arr[arr.size() - 1];
        arr.pop_back();
      }
    }
    cout << endl;
  }

  return 0;
}
