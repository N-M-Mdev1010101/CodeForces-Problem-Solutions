#include <bits/stdc++.h>
using namespace std;

void weird_algorithms(long long n) {
	while (n != 1) {
		cout << n << " ";
		if (n % 2 == 0)
			n /= 2;
		else
			n = (n*3) + 1;
	}
	cout << 1;
}

int main() {
	long long n;
	cin >> n;
	cout << typeid(n).name();
	weird_algorithms(n);
	return 0;
}
