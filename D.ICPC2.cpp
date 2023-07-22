#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    int ans = 0;
    for (int i = 1; i <= n; ++i) {
        if (a[a[i]] == i) {
            ans++;
        }
    }

    cout << ans / 2 << endl;

    return 0;
}
