#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string name;
	cin >> name;
	string fname, lname;

	for (int i = 0; i < name.size(); i++) {
		if (i < 4) fname += name[i];
		else lname += name[i];
	}
	cout << fname << ' ' << lname;
	return 0;
}
