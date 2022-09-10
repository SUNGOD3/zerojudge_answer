#include <stdio.h>
int main(){
	int a,b,max=0;
	while(scanf("%d",&a)>0){
		while(a>0){
			scanf("%d",&b);
			if(b>max)
				max=b;
			a--;
		}
		printf("%d\n",max);
		max=0;
	}
}
