#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	vector<int> num_arr;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != '+') num_arr.push_back(s[i] - '0');
	}
	sort(num_arr.begin(), num_arr.end());
	string new_s;
	for (int i = 0; i < num_arr.size(); i++) {
		if (i == num_arr.size() - 1) new_s += to_string(num_arr[i]);
		else new_s += to_string(num_arr[i]) + '+';
	}
	cout << new_s;
	return 0;
}
