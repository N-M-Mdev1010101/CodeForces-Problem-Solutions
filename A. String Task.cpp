#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main() {
	string str;
	cin >> str;
	vector<char> str_char;
	transform(str.begin(), str.end(), str.begin(), ::tolower);
	for (int i = 0; i < str.length(); i++) {
		str_char.push_back(str[i]);
	}

	string new_str = "";

	for (int i = 0; i < str.length(); i++) {
		if (str_char[i] == 'a' || str_char[i] == 'e' || str_char[i] == 'i' || str_char[i] == 'o' || str_char[i] == 'u' || str_char[i] == 'y') {
			continue;
		} else {
			new_str = new_str + '.' + str_char[i];
		}
	}

	cout << new_str;
	return 0;
}
