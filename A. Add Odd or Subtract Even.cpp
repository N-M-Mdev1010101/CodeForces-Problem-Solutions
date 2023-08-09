#include <iostream>
using namespace std;

int main () {
  long long int t;
  cin >> t;
  for (long long int i = 0; i < t; i++) {
    int a, b;
    cin >> a >> b;
    int moves_num = 0;
    while (a != b) {
      if (a > b) {
        if (((a - b) % 2) == 0) a = a - (a -b), moves_num++;
        else a = a - ((a - b)+1), moves_num++;
    } else if (a < b) {
        if (((b - a) % 2) != 0) a = a + (b - a), moves_num++;
        else a = a + ((b-a) - 1), moves_num++;
    }
  }
    cout << moves_num << '\n';
  }
  return 0;
}
