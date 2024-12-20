#include <stdio.h>
int main(){
	int a,b;
	while(scanf("%d%d",&a,&b)>0){
		if(a>b)
			printf("%d\n",100-a+b);
		else 
			printf("%d\n",b-a);
	}
} 
