#include <iostream>
using namespace std;
int main() {
	int m, xs[100], ys[100], counts = 0;
	cin >> m >> xs[0] >> ys[0] >> xs[1] >> ys[1];
	for (int i = 2; i < m; ++i) {
		cin >> xs[i] >> ys[i];
		for (int j = 0; j < i; ++j){
			int yis=ys[i]-ys[j],xis=xs[i]-xs[j];
			for (int k = j + 1; k < i; ++k)
				if ((yis) * (xs[i] - xs[k]) != (ys[i] - ys[k]) * (xis))
					++counts;
		}
	}
	cout << counts << '\n';
}
