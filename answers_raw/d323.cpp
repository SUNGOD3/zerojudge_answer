#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	std::ios::sync_with_stdio(false);
    cin.tie(NULL);
	int a;
	while(cin >> a){
		int b[a];
		for(int i=0;i<a;i++){
			cin >> b[i];
		}
		sort(b,b+a);
		for(int i=0;i<a;i++){
			cout << b[i] << " ";
		}
	}
}
