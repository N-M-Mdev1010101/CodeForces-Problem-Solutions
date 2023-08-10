#include <iostream>
using namespace std;

int main() {
  int cases;
  cin >> cases;
  int num_rooms = 0;
  for (int i = 0; i < cases; i++) {
    int p, q;
    cin >> p >> q;
    if (q - p >= 2) num_rooms += 1;
  }
  cout << num_rooms;
  return 0;
}
