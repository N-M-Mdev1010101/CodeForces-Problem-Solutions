#include <iostream>
using namespace std;
/*
int main() {
	long long int x;
	cin >> x;
	int steps = 0;
	while (x != 0) {
		if (x >= 5) {
			x -= 5;
			++steps;
			continue;
		} else if (x == 4 && x < 5) {
			x -= 4;
			++steps;
			continue;
		} else if (x == 3 && x < 4) {
			x -= 3;
			++steps;
			continue;
		} else if (x == 2 && x < 3) {
			x -= 2;
			++steps;
			continue;
		} else if (x == 1 && x < 2) {
			x -= 1;
			++steps;
			continue;
		}
	}
	cout << steps;
	return 0;
}
*/

int main() {
	long long int x;
	cin >> x;
	int steps;
	if (x > 5 && x % 5 != 0) {
		cout << (x/5) + 1;
	} else if (x > 5 && x % 5 == 0) {
		cout << x/5;
	} else {
		cout << 1;
	}
	return 0;
}
