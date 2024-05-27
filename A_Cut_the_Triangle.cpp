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

bool vertical(vector<int> x) {
  if (x[0] < max(x[1], x[2]) && x[0] > min(x[1], x[2]))
    return true;

  else if (x[1] < max(x[2], x[0]) && x[1] > min(x[2], x[0]))
    return true;

  else if (x[2] < max(x[0], x[1]) && x[2] > min(x[0], x[1]))
    return true;

  return false;
}
bool horizontal(vector<int> y) {
  if (y[0] < max(y[1], y[2]) && y[0] > min(y[1], y[2]))
    return true;

  else if (y[1] < max(y[2], y[0]) && y[1] > min(y[2], y[0]))
    return true;

  else if (y[2] < max(y[0], y[1]) && y[2] > min(y[0], y[1]))
    return true;

  return false;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  test {
    vector<int> x(3), y(3);
    for (int i = 0; i < 3; i++) {
      cin >> x[i];
      cin >> y[i];
    }

    if (vertical(x) || horizontal(y))
      yes

          else no
  }

  return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>