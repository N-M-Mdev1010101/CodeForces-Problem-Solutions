#include <iostream>
using namespace std;

int main() {
	int k2, k3, k5, k6;
	cin >> k2 >> k3 >> k5 >> k6;
	int n256 = 0, n32 = 0;
	while (k2 > 0 && k5 > 0 && k6 > 0) {
		n256++;
		k2--;
		k5--;
		k6--;
	}
	while (k3 > 0 && k2 > 0) {
		n32++;
		k3--;
		k2--;
	}
	cout << (256 * n256) + (32 * n32);
	return 0;
}
