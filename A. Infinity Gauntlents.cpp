#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  cout << 6 - n << '\n';
  vector<string> gems {"Power", "Time", "Space", "Soul", "Reality", "Mind"};
  for (int i = 0; i < n; i++) {
    string color;
    cin >> color;
    if (color == "purple") gems.erase(remove(gems.begin(), gems.end(), "Power"), gems.end());
    else if (color == "green") gems.erase(remove(gems.begin(), gems.end(), "Time"), gems.end());
    else if (color == "blue") gems.erase(remove(gems.begin(), gems.end(), "Space"), gems.end());
    else if (color == "orange") gems.erase(remove(gems.begin(), gems.end(), "Soul"), gems.end());
    else if (color == "red") gems.erase(remove(gems.begin(), gems.end(), "Reality"), gems.end());
    else gems.erase(remove(gems.begin(), gems.end(), "Mind"), gems.end());
  }
  for (auto elem: gems) {
    cout << elem << "\n";
  }
  return 0;
}
