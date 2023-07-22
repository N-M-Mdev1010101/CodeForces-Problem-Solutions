#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;

    int n = s.length();
    int count = 0;

    for (int i = 0; i < n - 2; i++) {
        string password = s.substr(i, 3);
        if (password[0] != password[1] && password[0] != password[2] && password[1] != password[2]) {
            ++count;
        }
    }

    cout << count;

    return 0;
}
