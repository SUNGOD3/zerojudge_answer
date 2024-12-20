#include <stdio.h>
int main(){
	int b,p,x,y;
	scanf("%d%d",&b,&p);
	int a[b+1],max=0,min=1000;
	for(int i=0;i<=b;i++)
		a[i]=0;
	while(p--){
		scanf("%d%d",&x,&y);
		if(y<x){
			x^=y;
			y^=x;
			x^=y;
		}
		for(int i=x;i<=y;i++)
			a[i]++;
	}
	for(int i=1;i<=b;i++){
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
	}
	for(int i=1;i<=b;i++){
		if(a[i]==min){
			printf("%d ",i);
			break;
		}
	}
	for(int i=b;i>=0;i--){
		if(a[i]==max){
			printf("%d",i);
			break;
		}
	}
} 
