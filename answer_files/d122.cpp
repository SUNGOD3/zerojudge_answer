#include <stdio.h>
int main(){ 
	long int n;
	int a=0;
	while(scanf("%ld",&n)>0){
		while(n>4){
			n-=n%5;
			a+=n/5;
			n/=5;
		}
	printf("%d\n",a);
	a=0;
	}
}
