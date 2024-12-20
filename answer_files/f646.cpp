#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
	cin.sync_with_stdio(0); cin.tie(0);
	int T, H, W;
	double unitL = sqrt(2) / 2;
	while (cin >> T >> H >> W) 
		cout << fixed << setprecision(1) << "x=" << ((T / W & 1) ? W - T % W : T % W) * unitL << ' ' << "y=" << ((T / H & 1) ? H - T % H : T % H) * unitL << '\n';
}
