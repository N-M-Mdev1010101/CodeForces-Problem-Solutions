#include <iostream>
#include <vector>
#include <string>
using namespace std;

void monk_and_rotation() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		int n, k;
		cin >> n >> k;
		int arr[n];
		for (int j = 0; j < n; j++) {
			int elem;
			cin >> elem;
			arr[i] = elem;
		}
		for (int j = 0; j < k; j++) {
			arr[n-1] = arr[0];
		}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\n";
	}
	}
}


int main() {
	monk_and_rotation();
	return 0;
}
