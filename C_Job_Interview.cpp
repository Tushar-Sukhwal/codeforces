// Author :- Tushar
// Date:- 2024-05-30 20:27:56
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
    vector<int> pro(n + m + 1), ski(n + m + 1);
    for (int i = 0; i < n + m + 1; i++) cin >> pro[i];
    for (int i = 0; i < n + m + 1; i++) cin >> ski[i];
    vector<int> temp, temp2;

    int tot = n + m + 1;
    int ind = -1;
    int which = -1;
    int i;
    int main, nonMain;
    for (i = 0; i < tot; i++) {
      if (pro[i] > ski[i]) {
        if (n == 0) {
          ind = i;
          which = 1;
          temp.push_back(3);
          temp2.push_back(-1);
          main = ski[i];
          nonMain = pro[i];
          break;
        }
        temp.push_back(1);
        temp2.push_back(pro[i]);
        n--;
      } else {
        if (m == 0) {
          ind = i;
          which = 2;
          temp.push_back(3);
          temp2.push_back(-1);
          nonMain = ski[i];
          main = pro[i];
          break;
        }
        temp.push_back(2);
        temp2.push_back(ski[i]);
        m--;
      }
    }
    i++;
    for (; i < tot; i++) {
      if (n == 0) {
        temp.push_back(2);
        temp2.push_back(ski[i]);
      } else {
        temp.push_back(1);
        temp2.push_back(pro[i]);
      }
    }
    int sum = 0;

    for (int i = 0; i < tot; i++) {
      if (temp[i] == 1) sum += pro[i];
      if (temp[i] == 2) sum += ski[i];
    }

    // for (auto it : temp2) cout << it << " ";
    // cout << endl;
    vector<int> output;

    for (int i = 0; i < tot; i++) {
      if (temp[i] == 3) {
        output.push_back(sum);

      } else if (temp[i] != which)
        output.push_back(sum - temp2[i] + main);
      else if (temp[i] == which) {
        output.push_back(sum - temp2[i] + nonMain);
      }
    }
    for (auto it : output) cout << it << " ";
    cout << endl;
  }

  return 0;
}
