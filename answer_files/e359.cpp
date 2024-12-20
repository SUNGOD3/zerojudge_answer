#include <iostream>
using namespace std;
int main() {
	cin.sync_with_stdio(false), cin.tie(NULL);
	int n, a;
	while (cin >> n >> ws) {
		if (n == 1){
			cin >> a;
			cout << a << "\n";
		}
		else{
			cin.ignore(200000,'\n');
			cout << "0\n";
		}
	}
}
