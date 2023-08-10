#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int first_value = 0;
  cin >> first_value;
  
  int min_value = first_value;
  int max_value = first_value;
  
  int amazing_performances = 0;
  for (int i = 1; i < n; i++) {
    int points;
    cin >> points;
    if (points > max_value) { 
      max_value = points;
      amazing_performances += 1;
    } else if (points < min_value) {
      min_value = points;
      amazing_performances += 1;
    }
  }
  cout << amazing_performances;
  return 0;
}
