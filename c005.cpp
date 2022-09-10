#include <stdio.h>
int main(){
	int n;
	long long int sum,f,c;
	scanf("%d",&n);
	while(scanf("%d",&n)>0){
		for(sum=0;n>0;n--){
			scanf("%lld%d%lld",&f,&c,&c);
			sum+=f*c;
		}
		printf("%lld\n",sum);
	}	
} 
