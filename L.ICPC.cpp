#include <iostream>
#include <vector>
#include <set>

using namespace std;

bool check(long long w) {
    set<int> digits;
    while (w > 0) {
        int d = w % 10;
        if (digits.count(d) >= 2) {
            return false;
        }
        digits.insert(d);
        w /= 10;
    }
    return true;
}

long long solve(vector<long long>& weights) {
    int n = weights.size();
    long long ans = 0;
    for (int mask = 0; mask < (1 << n); mask++) {
        long long w = 0;
        for (int i = 0; i < n; i++) {
            if ((mask >> i) & 1) {
                w += weights[i];
            }
        }
        if (check(w)) {
            ans = max(ans, w);
        }
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> weights(n);
        for (int i = 0; i < n; i++) {
            cin >> weights[i];
        }
        cout << solve(weights) << endl;
    }
    return 0;
}
