#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
	string user_name;
	cin >> user_name;
	set<char> name_char;

	for (int i = 0; i < user_name.size(); i++) {
		if (isalpha(user_name[i])) name_char.insert(user_name[i]);
	}
	if (name_char.size() % 2 == 0) cout << "CHAT WITH HER!";
	else cout << "IGNORE HIM!";
	return 0;
}
