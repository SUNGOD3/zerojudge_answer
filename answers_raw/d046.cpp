#include <stdio.h>
int main(){
	int n,w,c=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&w);
		if(w<=10)c++;
	}
	printf("%d\n",c);
	return 0;
}
