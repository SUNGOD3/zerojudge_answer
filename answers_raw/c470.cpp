#include <stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	int odd=0,even=0,n;
	for(int i=0;i<a;i++){
		scanf("%d",&n);
		odd+=n;
		i++;
		if(i==a)break;
		scanf("%d",&n);
		even+=n;
	}
	if(odd>even)
		printf("%d",odd);
	else
		printf("%d",even);
} 
