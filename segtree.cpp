// clang-format off
// Author :- Tushar || 13-08-2024 14:54:06
#include <bits/stdc++.h>
#ifdef LOCAL
#include "debug.h"
#else 
#define debug(x...) 42
#endif
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout << fixed << setprecision(7);
#define endl "\n" 
#define no cout << "NO \n";
#define yes cout << "YES \n";
#define int long long 
#define PI 3.1415926535897932384626433832795
const int inf = 1e9 ,INF = 1e18 ,mod1 = 998244353 ,mod = 1000000007; 
/*
    ∧＿∧
　 (｡･ω･｡)つ━☆・*。
  ⊂/　 /　   ・゜
　しーＪ　　　     °。+ * 。　
　　　　　                .・゜
  */
// clang-format on

vector<int> segTree, lazy;
int merge(int a, int b) { return min(a, b); }

void build(vector<int>& arr, int start, int end, int index) {
  // build the segment tree
  // time complexity O(n) ;
  if (start == end) {
    segTree[index] = arr[start];
    return;
  }
  int mid = (start + end) / 2;
  int left = 2 * index, right = 2 * index + 1;
  build(arr, start, mid, left);
  build(arr, mid + 1, end, right);
  segTree[index] = merge(segTree[left], segTree[right]);
}

void propogate(int start, int end, int index) {
  if (start == end) {
    lazy[index] = 0;
    return;
  }  // leaf node

  lazy[2 * index] += lazy[index];
  lazy[2 * index + 1] += lazy[index];
  lazy[index] = 0;
}
void update(int start, int end, int index, int l, int r, int value) {
  if (lazy[index] != 0) {
    segTree[index] += lazy[index];
    propogate(start, end, index);
  }
  // my curret node is in the most update point
  if (start >= l && end <= r) {
    // complete overlap
    segTree[index] += value;
    lazy[index] += value;
    propogate(start, end, index);
    return;
  }
  if (start > r || end < l) {
    // disjoint
    return;
  }
  int mid = (start + end) / 2;
  update(start, mid, 2 * index, l, r, value);
  update(mid + 1, end, 2 * index + 1, l, r, value);

  segTree[index] = merge(segTree[2 * index], segTree[2 * index + 1]);
}

int query(int start, int end, int index, int l, int r) {
  // give sum form L to R
  // time complexity O(logn) ;
  if (lazy[index] != 0) {
    segTree[index] += lazy[index];
    propogate(start, end, index);
  }

  // complete overlap
  if (start >= l && end <= r) return segTree[index];
  // complete disjoint
  if (l > end || r < start) return inf;
  // partial overlap
  int mid = (start + end) / 2;
  int left = 2 * index, right = 2 * index + 1;
  int leftSum = query(start, mid, left, l, r);
  int rightSum = query(mid + 1, end, right, l, r);
  return merge(leftSum, rightSum);
}

int32_t main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) cin >> arr[i];
  segTree.resize(4 * n, -1);
  lazy.resize(4 * n, 0);
  build(arr, 0, n - 1, 1);
  debug(segTree);
  debug(lazy);

  return 0;
}
