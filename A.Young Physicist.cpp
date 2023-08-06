#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	int x = 0, y = 0, z = 0;
	for (int i = 0; i < t; i++) {
		int val_x = 0, val_y = 0, val_z = 0;
		cin >> val_x >> val_y >> val_z;
		x += val_x;
		y += val_y;
		z += val_z;
	}
	if (x == 0 && y == 0 && z == 0) cout << "YES";
	else cout << "NO";
	return 0;
}
