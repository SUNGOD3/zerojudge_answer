#include <stdio.h>
int a[1001001]={0},p[78955]={0};
int main(){
	for(int i=2;i<=1001;i++)
		for(int j=i*2;j<=1001000;j+=i)
			a[j]=1;
	for(int i=0,j=2;i<78955&&j<=1001000;j++){
		if(a[j]==0){
			p[i]=j;
			i++;
		}
	}
	int b;
	while(scanf("%d",&b)){
		if(b==0)break;
		printf("%d : ",b);
		int sum=0;
		for(int i=0;p[i]<=b;i++){
			if(b%p[i]==0)
				sum++;
		}
		printf("%d\n",sum);
	}		
} 
