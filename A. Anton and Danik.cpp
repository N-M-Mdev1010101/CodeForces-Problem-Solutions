#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	string wins;
	cin >> wins;
	int danik = 0, anton = 0;
	for (int i = 0; i < n; i++) {
		if (wins[i] == 'A') anton++;
		else danik++;
	}
	if (danik > anton) cout << "Danik";
	else if (anton > danik) cout << "Anton";
	else cout << "Friendship";
	return 0;
}
