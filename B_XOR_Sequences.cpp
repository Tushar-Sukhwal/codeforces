// Author :- Tushar
6
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

    int ans = 0;
    while (((n & 1) == (m & 1)) && max(n, m) != 0) {
      n = n >> 1;
      m = m >> 1;
      ans++;
    }
    cout << (int)pow(2, ans) << endl;
  }
  
  return 0;
}
