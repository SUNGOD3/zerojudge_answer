#include <stdio.h>
int n[21];
int main(){
	int a,b;
	scanf("%d",&a);
	while(scanf("%d",&b)>0)
		n[b]=1;
	for(int i=a;i>0;i--)
		if(n[i]==0)
			printf("No. %d\n",i);
} 
