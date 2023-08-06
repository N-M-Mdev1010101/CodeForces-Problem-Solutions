#include <bits/stdc++.h>
using namespace std;

void solution(int& x_value) {
	string operation;
	cin >> operation;
	if (operation == "++x") {
		++x_value;
	} else if (operation == "x++") {
		x_value++;
	} else if (operation == "x--") {
		x_value--;
	} else {
		--x_value;
	}
}

int main() {
	int t;
	cin >> t;
	int x_value = 0;
	for (int i = 0; i < t; i++) {
		solution(x_value);
	}
	cout << x_value;
	return 0;
}
