#include <iostream>
using namespace std;
int main(){
	int a,b;
	int min1,min2;
	while(cin >> a >> b){
		if(a>=0&&b>=0){
			if(a-b<0)
				min1=a-b+100;
			else 
				min1=a-b;
			if(b-a<0)
				min2=b-a+100;
			else
				min2=b-a;
			if(min1<=min2)
				cout << min1 << endl;
			else
				cout << min2 << endl;
		}
	}
	
} 
