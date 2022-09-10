#include <stdio.h>
int main(){
	int b,c=1;
	scanf("%d",&b);
	while(scanf("%d",&b)>0){
		printf("Case #%d: %d is ",c,b);
		c++;
		int a[1001]={0},s=0;
		bool ans=0;
		if(b<=1000)
			a[b]++;
		while(a[1]==0){
			a[s]++;
			if(a[s]>1){
				ans=1;
				break;
			}
			s=0;
			while(b>0){
				s+=(b%10)*(b%10);
				b/=10;
			}
			b=s;
		}	
		(ans==0)?printf("a Happy number.\n"):printf("an Unhappy number.\n");
	}
} 
