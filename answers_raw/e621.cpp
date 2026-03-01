#include <iostream>
using namespace std;
int main(){
	int a,b,c,d;
	cin >> a;
	while(a--){
		cin >> b >> c >> d;
		bool e=0;
		for(int i=b+1;i<c;i++){
			if(i%d!=0){
				cout << i << " ";
				e=1;
			}
		}
		if(e==0)
			cout << "No free parking spaces.\n";
		else
			cout << "\n";	
	}
}
