#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double

int main() {
	ll n, m, a;
	cin >> n >> m >> a;
	cout << fixed << setprecision(0) <<ceil(n/(double)a) * ceil(m/(double)a);
	return 0;
}
