#include <stdio.h>
int main(){
	int n,m;
	while(scanf("%d%d",&n,&m)>0)
		printf("%d\n",(!(n&1<<(m-1))==0));
} 
