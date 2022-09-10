#include <iostream>
using namespace std;
int main(){
	int c,a0,a1;
	cin >> c;
	cout << "Lumberjacks:\n";
	while(c--){
		int t=8;
		bool ans=0,way=0;
		cin >> a0 >> a1;
		if(a1>a0){
			way=1;
			a0=a1;
		}
		while(t--){
			cin >> a1;
			if(way){ 
				if(a1<a0)ans=1;
			} 
			else
				if(a1>a0)ans=1;
			a0=a1;
		}
		if(!ans)
			cout << "Ordered\n";
		else
			cout << "Unordered\n";
	}
} 
