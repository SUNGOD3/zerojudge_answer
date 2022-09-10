#include <stdio.h>
int main(){
	int a,b,c;
	scanf("%d",&a);
	while(scanf("%d%d%d",&a,&b,&c)>0){
		if(a<b+c&&b<a+c&&c<b+a){
			printf("1 ");
			if(a==b||b==c||c==a)
				printf("1\n");
			else
				printf("0\n");	
		}
		else
			printf("0\n");
	}
} 
