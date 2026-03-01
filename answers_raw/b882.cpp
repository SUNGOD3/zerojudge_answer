#include <stdio.h>
int main(){
	long long int a,b,c;
	scanf("%lld%lld%lld",&a,&b,&c);
	b+=c/60;
	c%=60;
	a+=b/60;
	b%=60;
	a%=24;
	if(a<10)
		printf("0");
	printf("%lld:",a);
	if(b<10)
		printf("0");
	printf("%lld:",b);
	if(c<10)
		printf("0");
	printf("%lld",c);
} 
