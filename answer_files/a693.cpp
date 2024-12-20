#include <stdio.h>
int main(){
	int m,n,j,k;
	while(scanf("%d%d",&n,&m)>0){
		int a[n]={0},sum[n]={0};
		for(int i=1;i<=n;i++){
			scanf("%d",&a[i]);
			sum[i]+=a[i]+sum[i-1];
		}
		while(m--){
			scanf("%d%d",&j,&k);
			printf("%d\n",sum[k]-sum[j-1]);
		}
	}
} 
