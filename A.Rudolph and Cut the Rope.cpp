#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin >> t;
	int num_of_ropes_to_not_cut = 0;
	vector<int> num_of_ropes_vector;
	for (int i = 0; i < t; i++) {
		int num_of_ropes_to_not_cut = 0;
		int num_of_nails = 0;
		cin >> num_of_nails;
		for (int j = 0; j < num_of_nails; j++) {
		int heightOfNail, lengthOfNail;
		cin >> heightOfNail >> lengthOfNail;
		if (heightOfNail - lengthOfNail <= 0) ++num_of_ropes_to_not_cut; 
		}
		num_of_ropes_vector.push_back(num_of_nails - num_of_ropes_to_not_cut);
	}

	for (int i = 0; i < t; i++) {
		cout << num_of_ropes_vector[i] << "\n";
	}
	return 0;
}
