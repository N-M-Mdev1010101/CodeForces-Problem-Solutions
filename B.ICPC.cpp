#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string t = "SCPCTeensQual2024";
	string s;
	cin >> s;
	int wrongness = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != t[i]) wrongness+= 1;
	}
	cout << wrongness;
}
