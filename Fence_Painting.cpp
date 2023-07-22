#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	freopen("paint.in", "r", stdin);
	freopen("paint.out", "w", stdout);
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	vector<bool> cover(100);
	for (int i = a; i < b; i++) cover[i] = true;
	for (int i = c; i < d; i++) cover[i] = true;
	int ans = 0;
	for (int i = 0; i < cover.size(); i++) ans += cover[i];
	cout << ans;
	return 0;
}
