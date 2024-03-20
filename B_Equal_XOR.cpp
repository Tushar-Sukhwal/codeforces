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

  int32_t main() {
    letsgooooooooooo cout << fixed << setprecision(7);
    test {
      int n, k;
      cin >> n >> k;
      set<int> s1, s2;
      set<int> p1, p2;

      for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (s1.count(a)) {
          p1.insert(a);
          s1.erase(a);
        } else {
          s1.insert(a);
        }
      }
      for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (s2.count(a)) {
          p2.insert(a);
          s2.erase(a);
        } else {
          s2.insert(a);
        }
      }
      set<int> visited;
      vector<int> arr1, arr2;

      if (p1.size() >= k) {
        int temp = k ; 
        auto it = p1.begin() ;
        while(k--){
          arr1.push_back(*it);
          arr1.push_back(*it);
          it++;
        }
        auto it2 = p2.begin() ;
        while(temp--){
          arr2.push_back(*it2);
          arr2.push_back(*it2);
          it2++;
        }

      } else {
        for (auto it = p1.begin(); it != p1.end(); it++) {
          arr1.push_back(*it);
          arr1.push_back(*it);
          visited.insert(*it);
        }
        for (auto it = p2.begin(); it != p2.end(); it++) {
          arr2.push_back(*it);
          arr2.push_back(*it);
          visited.insert(*it);
        }
        k = k - visited.size()+1;
        int temp = k;
        int i = 1;
        while (k) {
          if (visited.count(i)) {
            i++;
          } else {
            arr1.push_back(i);
            arr2.push_back(i);
            k--;
            i++;
          }
        }
      }
      for (int i = 0; i < arr1.size(); i++) {
        cout << arr1[i] << " ";
      }
      cout << endl;
      for (int i = 0; i < arr2.size(); i++) {
        cout << arr2[i] << " ";
      }
      cout << endl;
    }

    return 0;
  }
