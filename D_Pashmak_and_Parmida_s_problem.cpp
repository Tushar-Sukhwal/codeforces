// Author :- Tushar
// Date:- 2024-06-24 19:05:11
#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
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
#define ordered_set                            \
  tree<int, null_type, less<int>, rb_tree_tag, \
       tree_order_statistics_node_update>
// const ll mod = 1000000007;
// const ll mod = 998244353;

using namespace std;
using namespace __gnu_pbds;

int32_t main() {
  letsgooooooooooo cout << fixed << setprecision(7);
  ordered_set o_set;
  o_set.insert(1);
  o_set.insert(2);

  cout << *o_set.find_by_order(1) << endl;

  return 0;
}
