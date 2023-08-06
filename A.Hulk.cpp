#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	string answer;
	for (int i = 1; i <= t; i++) {
		if (i % 2 != 0 && i != t) answer += "I hate that ";
		else if (i % 2 == 0 && i != t) answer += "I love that ";
		else if (i % 2 != 0 && i == t) answer += "I hate it";
		else if (i % 2 == 0 && i == t) answer += "I love it";
	}
	cout << answer;
	return 0;
}
