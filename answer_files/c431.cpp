#include <stdio.h>
int a[101]={0};
int main(){
	int n,x;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&x);
		a[x]++;
	}
	for(int i=1;i<101;i++){
		while(a[i]--){
			printf("%d ",i);
		}
	}
} 
