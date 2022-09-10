#include <stdio.h>
int main(){
	int a,b,c;
	while(scanf("%d%d%d",&a,&b,&c)>0){
		printf("%d %d %d. ",a,b,c);
		(a*c>=b)?puts("I will make it!\n"):puts("I will be late!\n");
	}
} 
