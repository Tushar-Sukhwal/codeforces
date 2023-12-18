#include <bits/stdc++.h>
using namespace std;
// #define int long long
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

bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) {
  return (a.second < b.second);
}

int32_t main() {
  letsgooooooooooo cout << fixed << setprecision(7);
  test {
    int n;
    cin >> n;
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++) {
      cin >> arr[i].first;
      arr[i].second = i;
    }
    sort(arr.begin(), arr.end(),greater<pair<int, int> >());

    vector<pair<int, int>> arr2;
    for (int i = 0; i < n; i++) {
      arr2.push_back({i, arr[i].second});
    }
    std::sort(arr2.begin(), arr2.end(), sortbysec);
    for (int i = 0; i < n; i++) {
      cout << arr2[i].first+1 << " ";
    }
    cout << endl;
  }

  return 0;
}
