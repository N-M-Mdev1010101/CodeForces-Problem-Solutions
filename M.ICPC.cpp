#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Prank {
    int v, d;
};

bool cmp(const Prank& a, const Prank& b) {
    return (a.v - a.d) > (b.v - b.d);
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<Prank> pranks(n);
    for (int i = 0; i < n; i++) {
        cin >> pranks[i].v >> pranks[i].d;
    }

    sort(pranks.begin(), pranks.end(), cmp);

    long long totalPoints = 0;
    for (int i = 0; i < n; i++) {
        if (m <= 0) {
            break;
        }
        int t = min(m, pranks[i].d);
        totalPoints += (long long)pranks[i].v * t - (long long)pranks[i].d * (t - 1) * t / 2;
        m -= t;
    }

    cout << totalPoints << endl;

    return 0;
}
