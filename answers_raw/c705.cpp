#include<stdio.h>
int main(){
	long long int x,a,b,c,d;
	while(scanf("%lld",&x)>0){
		a=x/16777216;
		x%=16777216;
		b=x/65536;
		x%=65536;
		c=x/256;
		d=x%256;
		printf("%lld.%lld.%lld.%lld\n",a,b,c,d);
	}
} 
