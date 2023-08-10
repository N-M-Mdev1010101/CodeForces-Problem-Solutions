#include <iostream>
#include <string>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;
  int txt_size = s.size();
  bool ok = true;
  for (int i = 0; i < t.size(); i++) {
    if (t[i] != s[txt_size - (i + 1)]) ok = false;
  }
  if (ok) cout << "YES";
  else cout << "NO";
  return 0;
}
