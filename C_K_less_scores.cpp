#include <iostream>
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
  letsgooooooooooo int n, k;
  cin >> n >> k;
  set<int> arr;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    arr.insert(a);
  }

  auto it = arr.begin();
  for (int i = 0; i < k - 1; i++) {
    it++;
  }
  it++;
  auto temp = it;
  it--;

  if (temp == it || (k == 0 && *(arr.begin()) == 1 )) {
    cout << -1;
  } else {
    cout << *it;
  }

  return 0;
}
