#include <stdio.h>
int a[1001]={0};
int main(){
	for(int i=2;i<=32;i++){
		if(a[i]==0)
			for(int j=i*2;j<=1000;j+=i)
				a[j]=1;
	}
	int b;
	while(scanf("%d",&b)>0){
		int c=1;
		for(int i=2;i<=b;i++){
			if(a[i]==0){
				printf("%10d",i);
				if(c%5==0)printf("\n");
				c++;
			}
		}
		printf("\n");
	}
} 
