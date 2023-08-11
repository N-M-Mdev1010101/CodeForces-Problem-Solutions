#include <iostream>
using namespace std;

int main() {
  int num_of_employees;
  cin >> num_of_employees;
  int ways = 0;
  for (int i = 1; i <= num_of_employees; i++) {
    // check if num_of_employees - team leaders is divisable by team leader
    if ((num_of_employees - i) % i == 0 && num_of_employees - i != 0) ways++;
  }
  cout << ways;
  return 0;
}
