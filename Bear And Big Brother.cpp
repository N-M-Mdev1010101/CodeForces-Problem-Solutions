#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int year_num = 0;
    while (a <= b) {
        a *= 3;
        b *= 2;
        ++year_num;
    }
    cout << year_num << endl;
    return 0;
}
