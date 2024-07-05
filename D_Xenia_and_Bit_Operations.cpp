// Author :- Tushar
// Date:- 2024-06-24 18:43:55
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

vector<int> segTree;
int build(vector<int>& arr, int start, int end, int index) {
  // build the segment tree
  // time complexity O(n) ;
  if (start == end) {
    segTree[index] = arr[start];
    return 0;
  }
  int mid = (start + end) / 2;
  int left = 2 * index, right = 2 * index + 1;
  int a = build(arr, start, mid, left);
  int b = build(arr, mid + 1, end, right);

  if (a == 0 && b == 0) {
    segTree[index] = segTree[left] | segTree[right];
    return 1;
  }
  if (a == 1 && b == 1) {
    segTree[index] = segTree[left] ^ segTree[right];
    return 0;
  }
}

int update(vector<int>& arr, int start, int end, int index, int pos,
           int value) {
  // update the segment tree
  // time complexity O(logn) ;
  if (start == end) {
    arr[pos] = value;
    segTree[index] = value;
    return 0;
  }
  int mid = (start + end) / 2;
  int a = -1;
  if (mid >= pos)
    // update left part
    a = update(arr, start, mid, 2 * index, pos, value);
  else
    // update right part
    a = update(arr, mid + 1, end, 2 * index + 1, pos, value);

  if (a == 0) {
    segTree[index] = segTree[2 * index] | segTree[2 * index + 1];
    return 1;
  } else {
    segTree[index] = segTree[2 * index] ^ segTree[2 * index + 1];
    return 0;
  }
}

int query(int start, int end, int index, int l, int r) {
  // give sum form L to R
  // time complexity O(logn) ;

  // complete overlap
  if (start >= l && end <= r) return segTree[index];
  // complete disjoint
  if (l > end || r < start) return 0;
  // partial overlap
  int mid = (start + end) / 2;
  int left = 2 * index, right = 2 * index + 1;
  int leftSum = query(start, mid, left, l, r);
  int rightSum = query(mid + 1, end, right, l, r);
  return leftSum + rightSum;
}

int32_t main() {
  letsgooooooooooo cout << fixed << setprecision(7);
  int n, m;
  cin >> n >> m;
  n = pow(2, n);
  vector<int> arr(n);
  for (int i = 0; i < n; i++) cin >> arr[i];
  segTree.resize(4 * n, -1);
  build(arr, 0, n - 1, 1);

  while (m--) {
    int p, b;
    cin >> p >> b;
    update(arr, 0, n - 1, 1, p - 1, b);
    cout << segTree[1] << endl;
  }

  return 0;
}
