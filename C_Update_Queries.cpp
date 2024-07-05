// Author :- Tushar
// Date:- 2024-06-23
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

int32_t main() {
  letsgooooooooooo test {
    int n, m;
    cin >> n >> m;
    string str;
    cin >> str;
    map<int, int> hash;
    set<int> indi;
    for (int i = 0; i < m; i++) {
      int a;
      cin >> a;
      indi.insert(a - 1);
    }
    string c;
    cin >> c;

    for (auto it : c) {
      hash[it - 'a']++;
    }

    int ind = 0;
    for (auto it : indi) {
      auto beg = hash.begin();
      str[it] = 'a' + (*beg).first;
      (*hash.begin()).second--;
      if ((*hash.begin()).second == 0) hash.erase(hash.begin());
    }
    cout << str << endl;
  }
  return 0;
}
