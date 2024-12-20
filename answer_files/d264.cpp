#include <stdio.h>
int a[40]={1,1,2};
int main(){
	int n,i;
	for(i=2;i<40;++i){
		a[i]=a[i-1]+a[i-2];
	}
	while(scanf("%d",&n)>0){
		for(i=0;a[i]<=n;++i){}
		printf("%d %d\n",a[i-2],a[i-1]);
	}
} 
