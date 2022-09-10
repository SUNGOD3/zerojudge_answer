#include <stdio.h>
int main(){
	int t,n;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		scanf("%d",&n);
		int a[n]={0},m=n;
		while(n--)
			scanf("%d",&a[n]);
		printf("Case %d: %d\n",i,a[m/2]);
	}
} 
