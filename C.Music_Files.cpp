#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> files;
	for (int i = 0; i < n; i++) {
		int elem;
		cin >> elem;
		files.push_back(elem);
	}
	sort(files.begin(), files.end());
	cout << files[n-1];
	return 0;
}
