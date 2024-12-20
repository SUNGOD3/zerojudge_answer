#include <stdio.h>
int main(){
	long long int a,b,q,t;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld%lld%lld",&a,&b,&q);
		if(a==b||a*q%10007==b*q%10007){
			printf("SAFE\n");
		}
		else{
			printf("BOOM\n");
		}
	}
} 
