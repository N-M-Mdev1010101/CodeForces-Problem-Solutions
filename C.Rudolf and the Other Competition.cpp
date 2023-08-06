#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solution(vector<int> &rodulph_ranks) {
	int n, m, h;
	cin >> n >> m >> h;
	int player_points[n];
	int player_penalties[n];
	for (int i = 0; i < n; i++) {
		vector<int> times;
		for (int j = 0; j < m; j++) {
			int time;
			cin >> time;
			times.push_back(time);
		}
		sort(times.begin(), times.end());
		int problems_solved = 0;
		int sum = 0;
		while (sum <= h && problems_solved < m) {
			sum += times[problems_solved];
			++problems_solved;
		}
		player_points[i] = problems_solved;
		player_penalties[i] = sum;
	}
	int rank = 1;
	for (int i = 1; i < n; i++) {
		if (player_points[i] > player_points[0] || (player_points[i] == player_points[0] && player_penalties[i] < player_penalties[0])) rank++;
	}
	rodulph_ranks.push_back(rank);
}

int main() {
	int t;
	cin >> t;
	vector<int> rodulph_ranks;
	for (int i = 0; i < t; i++) {
		solution(rodulph_ranks);
	}
	for (int i = 0; i < rodulph_ranks.size(); i++) {
		cout << rodulph_ranks[i] << "\n";
	}
	return 0;
}
