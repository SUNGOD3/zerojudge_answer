#include <iostream>
using namespace std;
int main(){
	float a,b,c;
	while(cin >> a >> b >> c){
		if(a==0&&b==0&&c==0)break;
		printf("%.2f %.2f\n",a/b,c/(a/b));
	}
} 
