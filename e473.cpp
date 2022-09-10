#include <stdio.h>
#include <cmath>
int main(){
	int a,b;
	while(scanf("%d%d",&a,&b)>0){
		a=(log10(a)*b);
		printf("%d\n",a+1);
	}
} 
