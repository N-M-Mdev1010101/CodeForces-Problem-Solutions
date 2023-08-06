#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		string b;
		cin >> b;

		string ans = b.substr(0, 2);

		for (int j = 3; j < b.size(); j += 2) {
			ans += b[j];
		}
		cout << ans << "\n";
	}

	return 0;
}
