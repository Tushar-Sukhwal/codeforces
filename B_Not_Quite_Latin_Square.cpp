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


  void reverseStr(string& str)
  {
      int len = str.length();
      int n = len-1;
      int i = 0;
      while(i<=n){
          //Using the swap method to switch values at each index
          swap(str[i],str[n]);
          n = n-1;
          i = i+1;
    }
  
  }
  int32_t main() {
    letsgooooooooooo cout << fixed << setprecision(7);
    test {
      vector<string> arr(3);
      for (int i = 0; i < 3; i++) {
        cin >> arr[i];
      }

      int a, b;

      for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
          if (arr[i][j] == '?') {
            a = i;
            b = j;
          }
        }
      }

      string temp = "";

      for (int i = 0; i < 3; i++) {
        if (i != a) {
          temp.push_back(arr[i][b]);
        }
      }

      if (temp[0] == 'A' && temp[1] == 'B') {
        cout << "C" << endl;
      }
      else if (temp[0] == 'B' && temp[1] == 'C') {
        cout << "A" << endl;
      }
      else if (temp[0] == 'A' && temp[1] == 'C') {
        cout << "B" << endl;
      }
      reverseStr(temp) ; 
      if (temp[0] == 'A' && temp[1] == 'B') {
        cout << "C" << endl;
      }
      else if (temp[0] == 'B' && temp[1] == 'C') {
        cout << "A" << endl;
      }
      else if (temp[0] == 'A' && temp[1] == 'C') {
        cout << "B" << endl;
      }
    }

    return 0;
  }
