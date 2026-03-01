#include <stdio.h>
int main(){
	long long int a[100001],x,ans[10001];
	int n=0,nn=0;
	while(scanf("%lld",&x)>0)
		a[n++]=x;
	int i=n-2;
	while(i>=0){
		long long int z=a[i],add=0;
		while(z--)
			add+=a[--i];
		i--;
		ans[nn++]=add;
	}
	while(nn--)
		printf("%lld\n",ans[nn]);
} 
