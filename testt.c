#include <stdio.h>
#include <stdlib.h>

int uniqueNumbers(int N, int A, int B) {
  int visited[10001] = {
      0};  // Array to keep track of visited numbers (assuming N <= 10000)
  int queue[10001];  // Queue for BFS
  int front = 0, rear = 0;

  // Initialize BFS
  queue[rear++] = N;
  visited[N] = 1;

  while (front < rear) {
    int current = queue[front++];

    // Perform operation by subtracting A
    if (current - A > 0 && !visited[current - A]) {
      visited[current - A] = 1;
      queue[rear++] = current - A;
    }

    // Perform operation by subtracting B
    if (current - B > 0 && !visited[current - B]) {
      visited[current - B] = 1;
      queue[rear++] = current - B;
    }
  }

  // Count unique positive numbers
  int count = 0;
  for (int i = 1; i <= N; i++) {
    if (visited[i]) count++;
  }

  return count;
}

int main() {
  // Example 1
  printf("%d\n", uniqueNumbers(4, 1, 2));  // Output: 4

  // Example 2
  printf("%d\n", uniqueNumbers(10, 2, 5));  // Output: 8

  return 0;
}
