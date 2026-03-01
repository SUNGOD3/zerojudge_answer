#include <stdio.h>
int main(){
	long long int a[32],b=1,i=0;
	for(i=0;i<32;i++,b*=2)
		a[i]=b;	
	while(scanf("%lld",&b)>0){
		for(i=0;i<32;i++){
			if(a[i]>b){
				printf("No\n");
				break;
			}
			else if(a[i]==b){
				printf("Yes\n");
				break;
			}
		}
	}
}
 
