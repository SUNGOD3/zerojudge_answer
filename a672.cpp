#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	cin.sync_with_stdio(false), cin.tie(0);
	int squareSize, x, y, leftBound, rightBound, topBound, bottomBound, centerX, centerY, counts;
	while (cin >> squareSize >> x >> y, squareSize || x || y) {
		counts = 0, centerX = centerY = 1024;
		do {
			if (centerX - squareSize <= x && x <= centerX + squareSize && centerY - squareSize <= y && y <= centerY + squareSize)
				++counts;
			centerX += (centerX < x ? squareSize : -squareSize);
			centerY += (centerY < y ? squareSize : -squareSize);
			squareSize >>= 1;
		} while (squareSize);
		cout << right << setw(3) << counts << '\n';
	}
}
