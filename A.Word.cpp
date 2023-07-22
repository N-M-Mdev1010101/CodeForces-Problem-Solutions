#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string word;
	cin >> word;
	int lower_count = 0, upper_count = 0;
	for (int i = 0; i < word.size(); i++) {
		if (word[i] > 96 && word[i] < 123) lower_count++;
		else upper_count++;
	}
	if (lower_count >= upper_count) transform(word.begin(), word.end(), word.begin(), ::tolower);
	else transform(word.begin(), word.end(), word.begin(), ::toupper);
	cout << word;
	return 0;
}
