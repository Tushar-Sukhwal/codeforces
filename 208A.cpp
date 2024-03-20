//<<<<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>
#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define ll long long
#define no cout << "NO \n";
#define yes cout << "YES \n";
#define test      \
  lli trtyuio;    \
  cin >> trtyuio; \
  while (trtyuio--)
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string str, str1;
  cin >> str;
  int i = 0;
  while (i < str.size()) {
    // W is found
    if (str[i] == 'W') {
      // U is found
      if (str[i + 1] == 'U') {
        // B is found
        if (str[i + 2] == 'B') {
          str1.push_back(',');
          i = i + 3;

        }
        // B is not found
        else {
          str1.push_back('W');
          str1.push_back('U');
          i = i + 2;
        }
      }

      // U is not found
      else {
        str1.push_back('W');
        i++;
      }

    }
    // W is not found
    else {
      str1.push_back(str[i]);
      i++;
    }
  }

  for (int i = 0; i < str1.size(); i++) {
    if (str1[i] == ',') {
      if (i + 1 < str1.size() && str1[i + 1] == ',')
        continue;

      else
        cout << " ";
    } else
      cout << str1[i];
  }

  // correct and closed

  return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>