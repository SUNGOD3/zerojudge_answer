#include <iostream>
using namespace std;
int main(){
	int a;
	cin >> a;
	int b[a+1]={0},c,d;
	cin >> c;
	while(c--){
		cin >> d;
		for(int i=0;i<=a;i++)
			if((b[i]!=0&&i-d>=0)||i==a)
				b[i-d]++;
	}
	for(int i=0;i<=a;i++){
		if(b[i]!=0){
			cout << i << '\n';
			break;
		}
	}
} 
