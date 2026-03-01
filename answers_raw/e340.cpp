#include <stdio.h>
int main(){
	int b=0,c;
	scanf("%d",&c);
	while(scanf("%d",&c)!=EOF){
		printf("%d ",c-b);
		b=c;
	}
} 
