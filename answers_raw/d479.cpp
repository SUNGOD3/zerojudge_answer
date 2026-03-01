#include <stdio.h>
int main(){
	int a;
	while(scanf("%d",&a)>0)
		printf("%d\n",(a<<1)+a*a);
}
