#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	std::ios::sync_with_stdio(false);
    cin.tie(NULL);
	string a;
	int N,M;
	while(cin >> N >> M >> a){
		sort(a.begin(), a.end());
		cout << endl;
		for(;M>0;M--){
			cin >> N;
			cout << a[N-1];
		}
		cout << endl;
	}
	return 0;
} 
