#include <stdio.h>
#include <math.h>
int main(){
	int ans;
	while(scanf("%d",&ans)>0)
		printf("%d\n",(int)log2(ans)+1);
} 
