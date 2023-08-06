#include <bits/stdc++.h>
using namespace std;

const int MAXN = 105;
const int MAXK = 105;
const int MAXA = 505;
const int INF = 1e9;

int n, k;
int a[MAXN];
int dp[MAXN][MAXK];

int f(int l, int r) {
    int res = 0;
    for (int i = l + 1; i <= r; i++) {
        res += abs(a[i] - a[i - 1]);
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        memset(dp, 0, sizeof(dp));
        for (int i = 1; i <= n; i++) {
            dp[i][1] = f(1, i);
        }
        for (int j = 2; j <= k; j++) {
            for (int i = j; i <= n; i++) {
                dp[i][j] = INF;
                for (int r = j - 1; r < i; r++) {
                    dp[i][j] = min(dp[i][j], dp[r][j - 1] + f(r + 1, i));
                }
            }
        }
        cout << dp[n][k] << endl;
    }
    return 0;
}
