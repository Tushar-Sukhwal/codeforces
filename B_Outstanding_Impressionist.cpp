#include <bits/stdc++.h>
#define int long long
using namespace std;

template <typename Node, typename Update>
struct SegTree {
  vector<Node> tree;
  vector<int> arr;
  int n;
  int s;
  SegTree(int a_len, vector<int> &a) {
    arr = a;
    n = a_len;
    s = 1;
    while (s < 2 * n) {
      s = s << 1;
    }
    tree.resize(s);
    fill(tree.begin(), tree.end(), Node());
    build(0, n - 1, 1);
  }
  void build(int start, int end, int index) {
    if (start == end) {
      tree[index] = Node(arr[start]);
      return;
    }
    int mid = (start + end) / 2;
    build(start, mid, 2 * index);
    build(mid + 1, end, 2 * index + 1);
    tree[index].merge(tree[2 * index], tree[2 * index + 1]);
  }
  void update(int start, int end, int index, int query_index, Update &u) {
    if (start == end) {
      u.apply(tree[index]);
      return;
    }
    int mid = (start + end) / 2;
    if (mid >= query_index)
      update(start, mid, 2 * index, query_index, u);
    else
      update(mid + 1, end, 2 * index + 1, query_index, u);
    tree[index].merge(tree[2 * index], tree[2 * index + 1]);
  }
  Node query(int start, int end, int index, int left, int right) {
    if (start > right || end < left) return Node();
    if (start >= left && end <= right) return tree[index];
    int mid = (start + end) / 2;
    Node l, r, ans;
    l = query(start, mid, 2 * index, left, right);
    r = query(mid + 1, end, 2 * index + 1, left, right);
    ans.merge(l, r);
    return ans;
  }
  void make_update(int index, int val) {
    Update new_update = Update(val);
    update(0, n - 1, 1, index, new_update);
  }
  Node make_query(int left, int right) {
    return query(0, n - 1, 1, left, right);
  }
};

struct Node1 {
  int val;
  int zeros;
  Node1() {
    val = 0;
    zeros = 0;
  }
  Node1(int p1) {
    val = p1;
    zeros = (p1 == 0) ? 1 : 0;
  }
  void merge(Node1 &l, Node1 &r) {
    val = l.val + r.val;
    zeros = l.zeros + r.zeros;
  }
};

struct Update1 {
  int val;
  Update1(int p1) { val = p1; }
  void apply(Node1 &a) {
    a.val = val;
    a.zeros = (val == 0) ? 1 : 0;
  }
};

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++) {
      cin >> arr[i].first;
      cin >> arr[i].second;
    }

    vector<int> check(2 * n + 2, 0);
    for (int i = 0; i < n; i++) {
      if (arr[i].first == arr[i].second) check[arr[i].first] += 1;
    }
    string ans(n, '0');

    SegTree<Node1, Update1> st(check.size(), check);

    for (int i = 0; i < n; i++) {
      if (arr[i].first == arr[i].second) {
        if (check[arr[i].first] == 1) ans[i] = '1';
      } else {
        Node1 res = st.make_query(arr[i].first, arr[i].second);

        if (res.zeros > 0) {
          ans[i] = '1';
        }
      }
    }

    cout << ans << endl;
  }

  return 0;
}