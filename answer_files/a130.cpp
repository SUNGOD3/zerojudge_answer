#include <iostream>
#include <string>
using namespace std;
struct c{
	string n;
	int v;
}d[10];
int main(){
	int a;
	string b;
	cin >> a;
	for(int c=1;c<=a;c++){
		int max=0;
		for(int i=0;i<10;i++){
			cin >> d[i].n >> d[i].v;
			if(d[i].v>max)
				max=d[i].v;
		}
		cout << "Case #" << c << ":\n"; 
		for(int i=0;i<10;i++){
			if(d[i].v==max){
				cout << d[i].n << "\n";
			}
		}
	}
} 
