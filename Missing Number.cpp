#include <bits/stdc++.h>
using namespace std;

//This problem is from the CSES Problem Set

/* algorithm
 * Read the input value of n from the user.

Read the sequence of n-1 numbers from the user and store them in an array or list.

Calculate the sum of all numbers between 1 and n using the formula: sum = n * (n + 1) / 2.

Calculate the sum of the numbers in the sequence using a loop or built-in function.

Subtract the sum of the sequence from the sum of all numbers to find the missing number.

Print the missing number.*/


int main() {
	long long n;
	cin >> n;
  cin.ignore();
	long long sum = (n*(n+1))/2;
	vector<int> sequence;
	string line;
	getline(cin, line);
	stringstream ss(line);


	for (int i = 0; i < n-1; i++) {
        int num;
        ss >> num;   // Extract the next number from the stringstream
        sequence.push_back(num);   // Store the number in the vector
    }
	int actual_sum = 0;
	for (int num : sequence) {
		actual_sum += num;
	}
	cout << sum - actual_sum << endl;
	return 0;
}
