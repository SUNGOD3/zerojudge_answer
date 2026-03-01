#include <stdio.h>
int main(){
	int m,n;
	while(scanf("%d%d",&m,&n)>0){
		int a[m]={0},k;
		while(n--){
			scanf("%d",&k);
			a[k-1]++;
		}
		k=0;
		for(int i=0;i<m;i++)
			if(a[i]<2)
				k++;
		printf("%d\n",k);
	}
} 
