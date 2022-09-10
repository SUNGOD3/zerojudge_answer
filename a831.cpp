#include <stdio.h>
int main(){
	long long int a,b,c;
	while(scanf("%lld%lld%lld",&a,&b,&c)>0){
		(a%c==0)?a=a/c:a=a/c+1;
		(b%c==0)?b=b/c:b=b/c+1;
		printf("%lld\n",a*b);
	}
} 
