#include <iostream>
using namespace std;
bool a[32];
int v,x,y;
int main(){
	while(cin >> v >> x >> y){
		for(int i=0;i<32;++i){
			a[i]=v&1;
			v>>=1;
		}
		a[x]=y;
		for(int i=31;i>=0;--i)
			cout << a[i]; 
		cout << "\n";
	}
} 
