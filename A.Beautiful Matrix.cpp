#include <bits/stdc++.h>
using namespace std;

int solution() {
	int matrix[5][5];
	int elem = 0;
	int operation_num = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> elem;
			matrix[i][j] = elem;
			if (elem == 1) {
				operation_num = abs(i - 2) + abs(j - 2);
			}
		}
	}
	
	return operation_num;
}

int main() {
	cout << solution();
	return 0;
}
