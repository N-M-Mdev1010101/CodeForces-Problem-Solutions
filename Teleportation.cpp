#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	freopen("teleport.in", "r", stdin);
	freopen("teleport.out", "w", stdout);

	int a, b, x, y;
	cin >> a >> b >> x >> y;
	if (abs(a - x) < abs(a - y)) {
		if (abs(a - b) > (abs(a-x) + abs(y-b))) cout << abs(a-x) + abs(y-b);
		else cout << abs(a - b);
	} else {
		if (abs(a - b) > (abs(a-y) + abs(x-b))) cout << abs(a-y) + abs(x-b);
		else cout << abs(a - b);
	}
	return 0;
}
