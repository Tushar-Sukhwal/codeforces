#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int maxAdjacentSum(int n) {
  vector<int> perm;
  for (int i = 1; i <= n; ++i) {
    perm.push_back(i);
  }

  vector<int> result(n);
  int left = 0;
  int right = n - 1;
  int index = 0;

  while (left <= right) {
    if (index % 2 == 0) {
      result[index] = perm[left++];
    } else {
      result[index] = perm[right--];
    }
    ++index;
  }

  int maxSum = 0;
  for (int i = 0; i < n - 1; ++i) {
    maxSum += abs(result[i] - result[i + 1]);
  }

  return maxSum;
}

int main() {
  int n;
  cout << "Enter the size of the permutation: ";
  cin >> n;
  cout << "Maximum sum of adjacent differences: " << maxAdjacentSum(n) << endl;
  return 0;
}
