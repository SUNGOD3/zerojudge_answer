#include <stdio.h>
int main(){
	long long int a;
	while(scanf("%lld",&a)>0){
		long long int b=0,c=a;
		while(c>0){
			b*=10;
			b+=c%10;
			c/=10;
		}
		printf("%lld\n",a+b);
	}
} 
