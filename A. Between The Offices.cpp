#include <iostream>
#include <vector>
using namespace std;

int main () {
  int t;
  cin >> t;
  vector<char> chars;
  string flights;
  cin >> flights;
  for (auto x : flights) {
    chars.push_back(x);
  }
  char current_position = chars[0];
  int S_to_F = 0, F_to_S = 0;
  for (int i = 1; i < chars.size(); i++) {
    if (current_position == 'S' && chars[i] == 'F') {
      S_to_F += 1;
      current_position = 'F';
    } else if (current_position == 'F' && chars[i] == 'S') {
      F_to_S += 1;
      current_position = 'S';
    }
  }
  if (S_to_F > F_to_S) cout << "YES";
  else cout << "NO";
  return 0;
}
