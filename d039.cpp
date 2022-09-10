#include <stdio.h>
int main(){
	int a,b;
	scanf("%d",&a);
	while(scanf("%d%d",&a,&b)!=EOF)
		printf("%d\n",(a/3)*(b/3));
} 
