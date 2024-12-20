#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
#define ERROR 1e-7
bool IfIntersect(int x1, int y1, int x2, int y2, int xc, int yc, int radius) {
	int buf1 = x1 - x2, buf2 = y1 - y2, buf3 = buf1 * y1 - buf2 * x1;
	double dis = abs(buf2 * xc - buf1 * yc + buf3) / sqrt(buf1 * buf1 + buf2 * buf2);
	if (dis < radius || abs(dis - radius) < ERROR)return 1;
	return 0;
}
bool IfOnLine(int x1, int y1, int x2, int y2, double x, double y) {
	int buf1 = x1 - x2, buf2 = y1 - y2, buf3 = buf1 * y1 - buf2 * x1;
	double dis = buf2 * x - buf1 * y + buf3;
	if (abs(dis) < ERROR)return 1;
	return 0;
}
void FindIntersect(int x1, int y1, int x2, int y2, int xc, int yc, int radius) {
	int buf1 = x1 - x2, buf2 = y1 - y2, buf3 = buf1 * y1 - buf2 * x1;
	double buf4 = sqrt(buf1 * buf1 + buf2 * buf2), dis = abs(buf2 * xc - buf1 * yc + buf3) / buf4;
	double buf5 = sqrt(radius * radius - dis * dis), newX1 = xc + dis / buf4 * buf2, newY1 = yc - dis / buf4 * buf1, newX2, newY2;
	if (!IfOnLine(x1, y1, x2, y2, newX1, newY1))
		newX1 = xc - dis / buf4 * buf2, newY1 = yc + dis / buf4 * buf1;
	newX2 = newX1 + buf5 / buf4 * buf1, newY2 = newY1 + buf5 / buf4 * buf2;
	newX1 -= buf5 / buf4 * buf1, newY1 -= buf5 / buf4 * buf2;
	if (newX2 + ERROR < newX1)
		swap(newX1, newX2), swap(newY1, newY2);
	cout << fixed << setprecision(5) << newX1 << ' ' << newY1 << ' ' << newX2 << ' ' << newY2 << '\n';
}
int main() {
	cin.sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int x1, y1, x2, y2, xc, yc, radius, times;
	for(cin >> times;times--;) {
		cin >> xc >> yc >> radius >> x1 >> y1 >> x2 >> y2;
		if (!IfIntersect(x1, y1, x2, y2, xc, yc, radius))
			cout << "No Intersect\n";
		else
			FindIntersect(x1, y1, x2, y2, xc, yc, radius);
	}
}
