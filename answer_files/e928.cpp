#include <stdio.h>
int a[101],b[101],c,ans[201],d,amax,i,j;
int main(){
	scanf("%d",&c);
	for(i=c;i>=0;--i)
		scanf("%d",&a[i]);
	scanf("%d",&d);
	for(j=d;j>=0;--j)
		scanf("%d",&b[j]);
	for(i=0;i<=c;++i)
		for(j=0;j<=d;++j)
			ans[i+j]+=a[i]*b[j];
	for(i=200;i>=0;--i)
		if(ans[i]){
			printf("%d\n",i); 
			amax=i;
			break;
		}
	for(i=amax;i>=0;--i)
		printf("%d ",ans[i]);
} 
