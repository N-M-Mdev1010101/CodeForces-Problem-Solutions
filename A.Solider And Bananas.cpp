#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int banana_cost, dollars, banana_num;
	cin >> banana_cost >> dollars >> banana_num;
	long long int total_cost = 0;
	for (long long int i = 1; i <= banana_num; i++) {
		total_cost += i * banana_cost;
	}
	if ((total_cost - dollars) < 0) {
		cout << 0;
	} else {
		cout << total_cost - dollars;
	}
	return 0;
}
