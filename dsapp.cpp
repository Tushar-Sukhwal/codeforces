#include <bits/stdc++.h>

using namespace std;

class MinHeap {
 public:
  vector<int> heap;
  int size;

  MinHeap(vector<int> &arr) {
    heap = arr;
    size = arr.size();
    buildHeap();
  }

  void heapify(int i) {
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < size && heap[left] < heap[smallest]) smallest = left;
    if (right < size && heap[right] < heap[smallest]) smallest = right;

    if (smallest != i) {
      swap(heap[i], heap[smallest]);
      heapify(smallest);
    }
  }

  void buildHeap() {
    for (int i = size / 2 - 1; i >= 0; i--) heapify(i);
  }

  int extractMin() {
    if (size == 0) return -1;

    int minVal = heap[0];
    heap[0] = heap[size - 1];
    size--;
    heapify(0);

    return minVal;
  }

  void heapSort(vector<int> &sortedArray) {
    while (size > 0) sortedArray.push_back(extractMin());
  }
};

int main() {
  int n = 1e6;
  vector<int> arr(n);

  for (int i = 0; i < n; i++) arr[i] = rand() % 1000000000;

  MinHeap minHeap(arr);

  vector<int> sortedArray;
  minHeap.heapSort(sortedArray);

  // Print first 10 sorted numbers
  for (int i = 0; i < 10; i++) cout << sortedArray[i] << " ";
  cout << endl;

  return 0;
}

/*

# Complexity Analysis
- Building the Heap (buildHeap) -> O(n) time complexity using bottom-up heap construction.
- Extracting Minimum (extractMin) -> Each extraction takes O(log n).
- Extracting n times results in O(n log n) total time.

Total Time Complexity
O(n)+O(nlogn)=O(nlogn)
which is the same as Merge Sort and QuickSort (average case).

Space Complexity
O(n) for storing the heap.

O(n) for storing the sorted array.

Total: O(n).

*/