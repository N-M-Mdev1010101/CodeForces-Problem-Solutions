#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    int num = 2*n;
    int even_count = 0, odd_count = 0;
    while (num--) {
      int elem;
      cin >> elem;
      if (elem % 2 == 0) even_count++;
      else odd_count++;
    }
    if (even_count == odd_count) cout << "Yes";
    else cout << "No";
    cout << '\n';
  }
  return 0;
}
