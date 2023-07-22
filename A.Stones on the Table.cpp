#include <iostream>

using namespace std;

int main() {
	int blablabla;
	cin >> blablabla;
	string colors;
	cin >> colors;
	int deleted_char = 0;
	for (int i = 1; i < colors.size(); i++) {
		if (colors[i] == colors[i-1]) deleted_char += 1;
	}
	cout << deleted_char;
	return 0;
}
