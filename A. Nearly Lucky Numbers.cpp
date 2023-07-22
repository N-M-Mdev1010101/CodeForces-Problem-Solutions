#include <iostream>

using namespace std;

int main() {
	long long int n, num_of_lucky_num = 0;
	cin >> n;
	while (n > 0) {
		if (n%10 == 4 || n%10 == 7) num_of_lucky_num++;
		n /= 10;
	}
	if (num_of_lucky_num == 4 || num_of_lucky_num == 7) cout << "YES";
	else cout << "NO";
	return 0;
}
