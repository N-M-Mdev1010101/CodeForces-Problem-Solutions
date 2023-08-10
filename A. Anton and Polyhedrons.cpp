#include <iostream>
#include <string>
using namespace std;

int main() {
  long long int num;
  cin >> num;
  long long int sum = 0;
  for (int i = 0; i < num; i++) {
    string polyhedron;
    cin >> polyhedron;
    if (polyhedron == "Tetrahedron") sum += 4;
    else if (polyhedron == "Cube") sum += 6;
    else if (polyhedron == "Octahedron") sum += 8;
    else if (polyhedron == "Dodecahedron") sum += 12;
    else sum += 20;
  }
  cout << sum;
  return 0;
}
