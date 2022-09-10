#include <stdio.h>
int main(){
	int a;
	char c[100001];
	while(scanf("%d",&a)>0){
		scanf("%s",&c);
		for(int i=0;i<a;i++)
		(c[i]>='A'&&c[i]<='Z')?printf("%c",c[i]+32):printf("%c",c[i]-32);
		printf("\n");
	}
} 
