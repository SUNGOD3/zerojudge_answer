#include <stdio.h>
int main(){
	int i=1,ans,d;
	long long int b=1,c=0,a[32];
	a[0]=0;
	for(;i<32;i++){
		a[i]=b;
		b+=c;
		c=b-c;
	}
	scanf("%d",&d);
	while(scanf("%lld%lld",&b,&c)>0&&d>0){
		if(c<b){
			b=c^b;
			c=c^b;
			b=c^b;
		}	
		for(i=0,ans=0;a[i]<=c;i++){
			if(a[i]>=b){
				printf("%d\n",a[i]);
				ans++; 
			}
		}
		d--;
		if(d!=0)
			printf("%d\n------\n",ans);
		else
			printf("%d\n",ans);	
	}
}
