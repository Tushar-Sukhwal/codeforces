
#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

const int MAXN = 2e5 + 10;
vector<int> adj[MAXN];
// Adjacency list for the tree
int leafCount, oneStepCount, totalResult;
int subtreeCount[MAXN], status[MAXN], nodeCount;

// DFS to process the tree and calculate results
void performDFS(int node, int parent) {
  for (auto &neighbor : adj[node]) {
    if (neighbor == parent) continue;

    performDFS(neighbor, node);

    subtreeCount[node] += subtreeCount[neighbor];
  }

  if (status[node] == 1) {
    // Node is one step from a leaf
    int remainingNodes = nodeCount - oneStepCount - leafCount;

    int degree = adj[node].size();

    for (auto &neighbor : adj[node]) {
      if (neighbor != parent) {
        totalResult += subtreeCount[neighbor] * (degree - 1);

        remainingNodes -= subtreeCount[neighbor];
      }
    }

    totalResult += (degree - 1) * remainingNodes;
  }

  subtreeCount[node] += (status[node] == 2);
}

void processTestCase() {
  cin >> nodeCount;

  // Reset global variables
  leafCount = 0;

  oneStepCount = 0;

  totalResult = 0;

  for (int i = 1; i <= nodeCount; i++) {
    adj[i].clear();

    subtreeCount[i] = 0;

    status[i] = 2;
    // Initialize all nodes as normal
  }

  // Read tree edges
  for (int i = 1, u, v; i < nodeCount; i++) {
    cin >> u >> v;

    adj[u].push_back(v);

    adj[v].push_back(u);
  }

  // Identify leaves and nodes one step from leaves
  for (int i = 1; i <= nodeCount; i++) {
    if (adj[i].size() == 1) {
      // Leaf node
      status[i] = 0;
      // Mark as a leaf
      int parent = adj[i][0];

      status[parent] = min(status[parent], 1LL);
      // Mark parent as one step from a leaf
    }
  }

  // Count leaves and nodes one step from leaves
  for (int i = 1; i <= nodeCount; i++) {
    leafCount += (status[i] == 0);

    oneStepCount += (status[i] == 1);
  }

  // Initial result based on leaf and one-step nodes
  totalResult = oneStepCount * leafCount;

  // Perform DFS to compute final result
  performDFS(nodeCount, 0);

  cout << totalResult << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(false);

  cin.tie(nullptr);

  int testCases;

  cin >> testCases;

  while (testCases--) {
    processTestCase();
  }

  return 0;
}