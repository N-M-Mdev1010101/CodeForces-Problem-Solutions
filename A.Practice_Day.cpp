#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	string s;
	cin >> s;
	string fname, lname;
	for (int i = 0; i < s.size(); i++) {
		if (i < 5) fname += s[i];
		else lname += s[i];
	}
	cout << fname << ' ' << lname;
}
