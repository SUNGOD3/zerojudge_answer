#include <stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	while(scanf("%d",&a)>0){
		if((a-1)%3==0)
			printf("NO\n");
		else printf("YES\n");
	}
	printf("\n");
} 
