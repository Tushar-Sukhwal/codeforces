//<<<<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>
#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll long long
#define no cout << "NO \n";
#define yes cout << "YES \n";
#define test         \
  lli Tushars_07;    \
  cin >> Tushars_07; \
  while (Tushars_07--)
#define vi vector<int>
#define fi for (int i = 0; i < n; i++)
#define fj for (int i = 0; i < n; i++)
#define pb push_back
#define mp make_pair
#define endl "\n"
#define ub upper_bound  // '>'
#define lb lower_bound  // '>='
#define ok cout << "ok" << endl;

void printarr(vector<int> arr) {
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  test {
    lli n, m, sum = 0;
    cin >> n >> m;
    vi arr(n), prefix;
    fi {
      cin >> arr[i];
      sum += arr[i];
      prefix.pb(sum);
    }
    // printarr(prefix) ;
    int flag = 0;
    int min = INT_MAX;
    for (int i = 0; i < m; i++) {
      if (prefix[i] < min) {
        min = prefix[i];
      }
    }

    int diff = 0;
    int counter = 0;
    int temp = prefix[m - 1];
    if (prefix[m - 1] != min) {
      int j = m - 1;

      while (min < prefix[m - 1]) {
        if (arr[j] > 0) {
          diff -= arr[j] * 2;
          prefix[m - 1] -= arr[j] * 2;
          counter++;
        }
        if (arr[j] == min && min < prefix[m - 1]) {
          counter++;
        }
        j--;
      }
    }
    // cout<<counter<<endl;

    prefix[m - 1] = temp;
    min = INT_MAX;
    // cout<<prefix[m-1]<<endl;
    for (int i = m - 1; i < n; i++) {
      if (prefix[i] < min) min = prefix[i];
    }

    if (min != prefix[m - 1]) {
      int j = m;
      while (prefix[m - 1] > min) {
        if (arr[j] < 0) {
          min += arr[j] * 2 * -1;
          counter++;
        }
        j++;
      }
    }
    cout << counter << endl;
  }

  return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>
///////////////////         ///////////  //      //        //\       //////////
//                  //           //      //       //  \      //      //
//    //      //   //            //      //      //   \      //      //
//    //      //   ///////////   //////////     //     \     //////////
//    //      //            //   //      //    //=======\    ////
//    //      //            //   //      //   //         \   //  //
//    //////////   ///////////   //      //  //            \ //    //
