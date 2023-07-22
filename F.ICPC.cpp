#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    int matrix[t][t];
    string matrix_rows[t];
    for (int i = 0; i < t; i++) {
        string row;
        cin >> row;
        matrix_rows[i] = row;
    }
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < t; j++) {
            string current_row = matrix_rows[i];
            matrix[i][j] = current_row[j] - '0';
        }
    }
    vector<int> all_wins;
    for (int i = 0; i < t; i++) {
        set<int> i_th_wins;
        for (int j = 0; j < t; j++) {
            if (matrix[i][j] == 1) i_th_wins.insert(j);
        }
        all_wins.push_back(i_th_wins.size());
    }

    sort(all_wins.begin(), all_wins.end(), greater<int>());
    int num_of_winners = 0;
    if (all_wins[0] != 0) {
        num_of_winners += 1;
        for (int i = 0; i < all_wins.size() - 1; i++) {
            if (all_wins[i+1] == all_wins[i]) {
                num_of_winners += 1;
            } else {
                break;
            }
        }
    } else {
        num_of_winners = 0;
    }

    cout << num_of_winners;
    return 0;
}
