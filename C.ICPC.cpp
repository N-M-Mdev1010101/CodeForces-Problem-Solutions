#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, a, b;
	cin >> n >> a >> b;
	string scoreboard;
	cin >> scoreboard;
	int teams_passed = 0, egyptian_teams_passed = 0;
	
	for (int i = 0; i < scoreboard.size(); i++) {
		if (scoreboard[i] == 'S') {
			if (a + b > teams_passed) {
				cout << "Yes" << "\n";
				teams_passed += 1;
			} else cout << "No" << "\n";
		} else if (scoreboard[i] == 'E') {
			if (a + b > teams_passed && egyptian_teams_passed < b) {
				cout << "Yes" << "\n";
				teams_passed += 1;
				egyptian_teams_passed += 1;
			} else cout << "No" << "\n";
		} else if (scoreboard[i] == 'U') cout << "No" << "\n";
	}

	return 0;
}
