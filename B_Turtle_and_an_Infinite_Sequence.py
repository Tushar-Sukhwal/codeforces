// Author :- Tushar
// Date:- 2024-05-31 15:50:50
#include <bits/stdc++.h>
using namespace std;

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

int MSBPosition(long long int N) {
    int msb_p = -1;
    while (N) {
        N = N >> 1;
        msb_p++;
    }
    return msb_p;
}

long long int findBitwiseOR(long long int L, long long int R) {
    long long int res = 0;
    int msb_p1 = MSBPosition(L);
    int msb_p2 = MSBPosition(R);

    while (msb_p1 == msb_p2) {
        long long int res_val = (1LL << msb_p1);
        res += res_val;
        L -= res_val;
        R -= res_val;
        msb_p1 = MSBPosition(L);
        msb_p2 = MSBPosition(R);

        if (msb_p1 < 0 || msb_p2 < 0) {
            break;
        }
    }

    msb_p1 = max(msb_p1, msb_p2);

    for (int i = msb_p1; i >= 0; i--) {
        long long int res_val = (1LL << i);
        res += res_val;
    }
    return res;
}

int32_t main() {
    letsgooooooooooo
    cout << fixed << setprecision(7);
    test {
        long long int n, m;
        cin >> n >> m;

        if (m == 0) {
            cout << n << endl;
            continue;
        } else if (n - m <= 0) {
            cout << findBitwiseOR(0, n + m) << endl;
            continue;
        }

        long long int l = max(1LL, n - m);
        long long int r = n + m;
        cout << findBitwiseOR(l, r) << endl;
    }

    return 0;
}
