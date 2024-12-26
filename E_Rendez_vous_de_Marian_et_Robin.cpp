#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18;

vector<long long> dijkstra(int start, int n,
                           const vector<vector<pair<int, int>>>& graph,
                           bool riding) {
  vector<long long> dist(n + 1, INF);
  priority_queue<pair<long long, int>, vector<pair<long long, int>>,
                 greater<pair<long long, int>>>
      pq;

  dist[start] = 0;
  pq.push({0, start});

  while (!pq.empty()) {
    long long d = pq.top().first;
    int u = pq.top().second;
    pq.pop();

    if (d > dist[u]) continue;

    for (const auto& [v, w] : graph[u]) {
      long long newDist = d + (riding ? w / 2 : w);
      if (newDist < dist[v]) {
        dist[v] = newDist;
        pq.push({newDist, v});
      }
    }
  }

  return dist;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n, m, h;
    cin >> n >> m >> h;

    vector<int> horses(h);
    for (int& horse : horses) {
      cin >> horse;
    }

    vector<vector<pair<int, int>>> graph(n + 1);

    for (int i = 0; i < m; i++) {
      int u, v, w;
      cin >> u >> v >> w;
      graph[u].emplace_back(v, w);
      graph[v].emplace_back(u, w);
    }

    vector<long long> distMarian = dijkstra(1, n, graph, false);
    vector<long long> distRobin = dijkstra(n, n, graph, false);

    vector<long long> distMarianWithHorse(n + 1, INF);
    vector<long long> distRobinWithHorse(n + 1, INF);

    for (int horsePos : horses) {
      vector<long long> horseRiding = dijkstra(horsePos, n, graph, true);
      for (int i = 1; i <= n; ++i) {
        distMarianWithHorse[i] =
            min(distMarianWithHorse[i], distMarian[horsePos] + horseRiding[i]);
        distRobinWithHorse[i] =
            min(distRobinWithHorse[i], distRobin[horsePos] + horseRiding[i]);
      }
    }

    long long answer = INF;
    for (int i = 1; i <= n; i++) {
      answer = min(answer, max(min(distMarian[i], distMarianWithHorse[i]),
                               min(distRobin[i], distRobinWithHorse[i])));
    }

    cout << (answer == INF ? -1 : answer) << "\n";
  }

  return 0;
}