#include <bits/stdc++.h>
using namespace std;

// To execute C++, please define "int main()"

void func(string &ans, string &temp) {
  string num;
  int n = temp.size();

  int i = 0;
  for (i = 0; i < n; i++) {
    if (temp[i] == '(') break;
    num.push_back(temp[i]);
  }
  i++;

  string value;
  while (i < n) {
    if (temp[i] == ')') break;
    value.push_back(temp[i]);
    i++;
  }

  auto rep = stoi(num);

  for (int i = 0; i < rep; i++) {
    ans += value;
  }
}

int main() {
  string str;
  // cin >> str;
  str = "3(ab)4(cd)";

  string ans;
  int n = str.size();

  // 3(ab)
  // 4(cd)

  for (int i = 0; i < n; i++) {
    string temp;

    while (str[i] != ')') {
      temp.push_back(str[i]);
      i++;
    }
    temp.push_back(str[i]);
    func(ans, temp);
  }
  cout << ans << endl;

  return 0;
}
