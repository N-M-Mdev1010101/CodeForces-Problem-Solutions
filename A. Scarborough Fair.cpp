#include <iostream>
#include <string>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  string s;
  cin >> s;
  for (int i = 0; i < m; i++) {
    int l, r, fallback_num;
    char c1, c2;
    cin >> l >> r >> c1 >> c2;
    if (l < r) fallback_num = l, l = r, r = fallback_num;
    for (int k = r; k <= l; k++) {
      if (s[k - 1] == c1) s[k - 1] = c2;
    }
  }
  cout << s;
  return 0;
}
