#include <stdio.h>
int main(){
	float a[278],n=1;
	a[0]=0.5;
	for(int i=1;i<278;i++,n++)
		a[i]=a[i-1]+(1/(n+2));
	float b;
	while(scanf("%f",&b)>0){
		int i;
		for(i=0;a[i]<b;i++){}
		printf("%d card(s)\n",i+1);
	}
} 
