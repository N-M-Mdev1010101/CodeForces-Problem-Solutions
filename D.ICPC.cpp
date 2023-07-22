#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long int n;
	cin >> n;
	int arr[n];

	for (int i = 0; i < n; i++) {
		long long int elem;
		cin >> elem;
		arr[i] = elem;
	}
	
	int smurfy_teams = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] + arr[arr[i] - 1] == arr[arr[i] - 1] + arr[arr[i] - 2]) smurfy_teams += 1;
	}
	cout << smurfy_teams;
	return 0;
}
