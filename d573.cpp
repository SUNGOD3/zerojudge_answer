#include <stdio.h>
int main(){
	int crc[100001],n,no,p,x;
	while(scanf("%d",&n)>0){
		while(n--){
			scanf("%d%d",&no,&p);
			while(p--){
				scanf("%d",&x);
				crc[x]=no;
			}
		}
		scanf("%d",&x);
		printf("%d\n",crc[x]);
	}
} 
