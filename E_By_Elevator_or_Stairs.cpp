// clang-format off
// Author :- Tushar
//Date:- 2024-06-29 11:11:56
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define letsgooooooooooo ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define test int Tushars_07; cin >> Tushars_07; while (Tushars_07--)
#define endl "\n"
#define no cout << "NO \n";
#define yes cout << "YES \n";
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define int long long

//this one has long long int 
typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds;

void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}

// ----------------------------------------------------------------
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
//--------------------------------------------------------------------
//
//
//
//
//
//
int gcd(int a, int b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
int expo(int a, int b, int mod) {int res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
void extendgcd(int a, int b, int*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); int x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} 
int mminv(int a, int b) {int arr[3]; extendgcd(a, b, arr); return arr[0];}
int mminvprime(int a, int b) {return expo(a, b - 2, b);}
bool revsort(int a, int b) {return a > b;}
int combination(int n, int r, int m, int *fact, int *ifact) {int val1 = fact[n]; int val2 = ifact[n - r]; int val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
void google(int t) {cout << "Case #" << t << ": ";}
vector<int> sieve(int n) {int*arr = new int[n + 1](); vector<int> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} delete[] arr; return vect;}
int mod_add(int a, int b, int m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
int mod_mul(int a, int b, int m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
int mod_sub(int a, int b, int m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
int mod_div(int a, int b, int m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}
int phin(int n) {int number = n; if (n % 2 == 0) {number /= 2; while (n % 2 == 0) n /= 2;} for (int i = 3; i <= sqrt(n); i += 2) {if (n % i == 0) {while (n % i == 0)n /= i; number = (number / i * (i - 1));}} if (n > 1)number = (number / n * (n - 1)); return number;}

// clang-format on

//! contants
const int mod = 1000000007;
const int mod1 = 998244353;
const int inf = 1e9;
const int INF = 1e18;
#define PI 3.1415926535897932384626433832795

int32_t main() {
  letsgooooooooooo cout << fixed << setprecision(7);

  int n, c;
  cin >> n >> c;
  vector<int> stair(n - 1);
  for (int i = 0; i < n - 1; i++) cin >> stair[i];
  vector<int> ele(n - 1);
  for (int i = 0; i < n - 1; i++) cin >> ele[i];

  vector<vector<int>> dp(n, vector<int>(2));

  // 0 stair
  // 1 ele
  dp[0][0] = 0;
  dp[0][1] = 0;
  dp[1][0] = stair[0];
  dp[1][1] = ele[0] + c;

  for (int i = 2; i < n; i++) {
    dp[i][0] = min(dp[i - 1][0], dp[i - 1][1]) + stair[i - 1];
    dp[i][1] = min(dp[i - 1][0] + c, dp[i - 1][1]) + ele[i - 1];
  }

  for (int i = 0; i < n; i++) {
    cout << min(dp[i][0], dp[i][1]) << " ";
  }
  cout << endl;

  return 0;
}
