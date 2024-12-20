#include <iostream>
#include <cmath> 
using namespace std;
int main(){
	float a,b;
	while(scanf("%f:%f",&a,&b)==2&&a!=0){
		a=(a*30)+b/2;
		b*=6;
		if(abs(a-b)>180) 
			printf("%.3f\n",360-abs(a-b));
		else 
			printf("%.3f\n",abs(a-b));
	}
}
