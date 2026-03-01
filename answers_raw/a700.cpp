#include <stdio.h>
long long int a[65];
int main(){
	long long int n=1;
	for(int i=0;i<64;i++){
		a[i]=n;
		n<<=1;
	}
	int x,y;
	while(scanf("%d%d",&x,&y)>0){
		printf("%lld\n",a[x*8+y-9]);
	}
} 
