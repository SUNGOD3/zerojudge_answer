#include <stdio.h>
int main(){
	int a,b;
	while(scanf("%d%d",&a,&b)>0){
		if(a<b&&a%2==0||b%2==0)
			printf("%d\n",(b-a)/2+1);
		else if(a<b)
			printf("%d\n",(b-a)/2);
		else if(a==b&&a%2==0)
			printf("1\n");
		else
			printf("0\n");
	}
} 
