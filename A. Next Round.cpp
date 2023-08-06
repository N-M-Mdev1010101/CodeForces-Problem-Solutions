#include <bits/stdc++.h>
using namespace std;

void solution(vector<int> &score_vector) {
	int score;
	cin >> score;
	score_vector.push_back(score);
}

int main() {
	int n, k;
	cin >> n >> k;
	int people_num = 0;
	vector<int> score_vector;
	for (int i = 0; i < n; i++) {
		solution(score_vector);
	}
	
	int k_value = score_vector[k - 1];
	for (int i = 0; i < n; i++) {
		if (score_vector[i] >= k_value && score_vector[i] > 0) {
			people_num++;
		}
	}
	cout << people_num;
	return 0;
}
