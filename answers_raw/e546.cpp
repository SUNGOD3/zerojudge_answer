#include <stdio.h>
int main(){
	int a,b;
	while(scanf("%d%d",&a,&b)>0){
		if(a==b){
			printf("*\n");
			while(a--)
				scanf("%d",&b);
		}
		else{
			int c[a+1]={0},n;
			while(b--){
				scanf("%d",&n);
				c[n]=1;
			}
			for(int i=1;i<=a;i++){
				if(c[i]==0)
					printf("%d ",i);
			}
			printf("\n");
		}
	}
} 
