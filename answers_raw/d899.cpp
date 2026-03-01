#include <stdio.h>
int ans[10001]={0};
void count(){
	int n;
	for(int i=1;i<=10000;i++){
		n=i;
		while(n>0){
			if(n%10==2)
				ans[i]++;
			n/=10;
		}
	}
} 
int main(){
	int a,b;
	count();
	while(scanf("%d%d",&a,&b)>0){
		int sum=0;
		while(a<=b){
			sum+=ans[a];
			a++;
		}
		printf("%d\n",sum); 
	}
} 
