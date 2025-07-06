// Author :- Tushar || 08-04-2025 21:41:19
#include <bits/stdc++.h>
#define int long long
using namespace std;
/*
    ∧＿∧
　 (｡･ω･｡)つ━☆・*。
  ⊂/　 /　   ・゜
　しーＪ　　　     °。+ * 。　
　　　　　                .・゜
*/

struct Node {
  Node *links[2];
  int pc = 0;

  bool containKey(int bit) { return links[bit] != NULL; }
  Node *get(int bit) { return links[bit]; }
  void put(int bit, Node *node) { links[bit] = node; }
};
class Trie {
 private:
  Node *root;

 public:
  Trie() { root = new Node(); }
  void insert(int num) {
    Node *node = root;
    for (int i = 30; i >= 0; i--) {
      int bit = (num >> i) & 1;
      if (!node->containKey(bit)) {
        node->put(bit, new Node());
      }
      node = node->get(bit);
      node->pc++;
    }
  }
  int getMax(int num) {
    Node *node = root;
    int maxNum = 0;

    for (int i = 30; i >= 0; i--) {
      int bit = (num >> i) & 1;

      if (node->containKey(1 - bit) && node->get(1 - bit)->pc > 0) {
        maxNum |= (1 << i);
        node = node->get(1 - bit);
      } else
        node = node->get(bit);
    }
    return maxNum;
  }
  void erase(int num) {
    Node *node = root;
    for (int i = 30; i >= 0; i--) {
      int bit = (num >> i) & 1;
      node = node->get(bit);
      node->pc--;
    }
  }
};

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> arr(n);

  for (auto &it : arr) cin >> it;
  int ans = INT_MAX;

  Trie *tr = new Trie();
  int l = 0;

  for (int i = 0; i < n; i++) {
    tr->insert(arr[i]);
    while (l <= i && tr->getMax(arr[i]) >= k) {
      ans = min(ans, i - l + 1);
      tr->erase(arr[l++]);
    }
  }

  if(ans == INT_MAX) cout << -1 << endl; 
  else cout << ans << endl; 

}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int tt = 0;
  cin >> tt;
  while (tt--) {
    solve();
  }
  return 0;
}
