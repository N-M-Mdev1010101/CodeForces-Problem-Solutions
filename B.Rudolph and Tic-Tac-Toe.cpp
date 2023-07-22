#include <iostream>
#include <vector>
using namespace std;

void winner(vector<string> &winners) {
	char tic_tac_toe_board[3][3];
	for (int i = 0; i < 3; i++) {
		string line;
		cin >> line;
		for (int j = 0; j < 3; j++) {
			tic_tac_toe_board[i][j] = line[j];
		}
	}
	if (tic_tac_toe_board[0][0] == tic_tac_toe_board[1][0] && tic_tac_toe_board[1][0] == tic_tac_toe_board[2][0]) {
		winners.push_back(string(1, tic_tac_toe_board[0][0]));
	} else if (tic_tac_toe_board[0][1] == tic_tac_toe_board [1][1] && tic_tac_toe_board [1][1] == tic_tac_toe_board[2][1]) {
		winners.push_back(string(1, tic_tac_toe_board[1][1]));
	} else if (tic_tac_toe_board[0][2] == tic_tac_toe_board [1][2] && tic_tac_toe_board [1][2] == tic_tac_toe_board[2][2]) {
		winners.push_back(string(1, tic_tac_toe_board[2][2]));
	} else if (tic_tac_toe_board[0][0] == tic_tac_toe_board[0][1] && tic_tac_toe_board[0][1] == tic_tac_toe_board[0][2]) {
		winners.push_back(string(1, tic_tac_toe_board[0][2]));
	} else if (tic_tac_toe_board[1][0] == tic_tac_toe_board[1][1] && tic_tac_toe_board[1][1] == tic_tac_toe_board[1][2]) {
		winners.push_back(string(1, tic_tac_toe_board[1][2]));
	} else if (tic_tac_toe_board[2][0] == tic_tac_toe_board[2][1] && tic_tac_toe_board[2][1] == tic_tac_toe_board[2][2]) {
		winners.push_back(string(1, tic_tac_toe_board[2][2]));
	} else if (tic_tac_toe_board[0][0] == tic_tac_toe_board[1][1] && tic_tac_toe_board[1][1] == tic_tac_toe_board[2][2]) {
		winners.push_back(string(1, tic_tac_toe_board[2][2]));
	} else if (tic_tac_toe_board[0][2] == tic_tac_toe_board[1][1] && tic_tac_toe_board[1][1]== tic_tac_toe_board[2][0]) {
		winners.push_back(string(1, tic_tac_toe_board[2][0]));
	} else {
		winners.push_back("DRAW");
	}
}

int main() {
	int t;
	cin >> t;
	vector<string> winners;
	for (int i = 0; i < t; i++) winner(winners);
	for (int i = 0; i < winners.size(); i++) {
		if (winners[i] != "."){ 
		cout << winners[i] << "\n";
		} else {
			cout << "DRAW" << "\n";
		}
	}
	return 0;
}
