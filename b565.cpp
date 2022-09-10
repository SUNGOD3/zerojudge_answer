#include <stdio.h>
int main(){
	int a;
	while(scanf("%d",&a)>0){
		int b,ans=0,max=0;
		while(a--){
			scanf("%d",&b);
			ans+=b;
			if(ans>max)max=ans;
			if(ans<0)ans=0;
		}
		printf("%d\n",max);
	}
} 
