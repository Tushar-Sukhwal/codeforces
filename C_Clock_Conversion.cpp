// Author :- Tushar
// Date:- 2024-03-28 20:23:05
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

string convertTo12HourFormat(int hour, int minute) {
  std::stringstream ss;
  std::string period = (hour >= 12) ? "PM" : "AM";
  hour = (hour > 12)   ? hour - 12
         : (hour == 0) ? 12
                       : hour;  // Handle 00:59 as 12:59 AM
  ss << std::setfill('0') << std::setw(2) << hour << ":" << std::setw(2)
     << minute << " " << period;
  return ss.str();
}

int32_t main() {
  letsgooooooooooo cout << fixed << setprecision(7);
  test {
    string str;
    cin >> str;
    string hour;
    string minute;
    hour.push_back(str[0]);
    hour.push_back(str[1]);
    minute.push_back(str[3]);
    minute.push_back(str[4]);
    cout << convertTo12HourFormat(stoi(hour), stoi(minute)) << endl;
  }

  return 0;
}
