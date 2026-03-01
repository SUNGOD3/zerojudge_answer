#include <stdio.h>
#include <math.h>
int main(){
	long long int a,b,c,d,e;
	while(scanf("%lld%lld%lld%lld%lld",&a,&b,&c,&d,&e)>0){
		(labs(a-c)+labs(b-d)<=e)?printf("die\n"):printf("alive\n");
	}
} 
