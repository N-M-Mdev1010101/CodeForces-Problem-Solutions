#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int min_cost(int n, vector<int>& a) {
    int median = n % 2 == 1 ? a[n/2] : (a[n/2-1] + a[n/2]) / 2;
    int cost = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            cost += abs(a[i] - median);
        } else {
            cost += abs(a[i] - median) / 2;
        }
    }
    return cost;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << min_cost(n, a) << "\n";
    }
    return 0;
}
