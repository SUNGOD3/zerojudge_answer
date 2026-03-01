#include <stdio.h>
int main(){
	float a,b;
	while(scanf("%f%f",&a,&b)>0){
		a*=0.2;
		a+=b*0.3;
		scanf("%f",&b);
		printf("%.0f\n",a+b*0.5);
	}
} 
