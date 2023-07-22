#include <bits/stdc++.h>
using namespace std;

void solution(int& problem_num) {
	int petya, samha, bsisa;
	cin >> petya >> samha >> bsisa;
	if (petya + samha + bsisa >= 2) {
		problem_num++;
	}
}

int main() {
	int n;
	int problem_num = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		solution(problem_num);
	}
	cout << problem_num;
	return 0;
}
