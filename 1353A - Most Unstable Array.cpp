#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n, m;
    cin >> n >> m;
    if (n == 1) cout << 0;
    else if (n == 2) cout << m;
    else cout << 2 * m;
    cout << '\n';
  }
  return 0;
}
