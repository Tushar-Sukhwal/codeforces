// Author :- Tushar || 24-12-2024 20:22:49
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

const int THREAD_COUNT = 10;  // Number of threads

void findUniformNumbers(int start, int end, mutex &mtx) {
  for (int i = start; i < end; i++) {
    string str = to_string(i * 7);
    set<char> st;
    for (auto it : str) st.insert(it);
    if (st.size() == 1) {
      lock_guard<mutex> lock(mtx);  // Ensure safe printing
      cout << str << endl;
    }
  }
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  const int64_t LIMIT = 1e18;  // Adjust to desired range
  vector<thread> threads;
  mutex mtx;

  int64_t range = LIMIT / THREAD_COUNT;

  for (int t = 0; t < THREAD_COUNT; t++) {
    int start = t * range;
    int end = (t == THREAD_COUNT - 1) ? LIMIT : start + range;

    threads.emplace_back(findUniformNumbers, start, end, ref(mtx));
  }

  for (auto &t : threads) t.join();

  return 0;
}
