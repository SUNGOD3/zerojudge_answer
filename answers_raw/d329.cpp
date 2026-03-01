#include <stdio.h>
int main(){
	int a,b,n;
	scanf("%d",&n);
	while(n--){
		scanf("%d%d",&a,&b);
		int ax=0,bx=0,ans=0;
		while(a>0){
			ax*=10;
			ax+=a%10;
			a/=10;
		}
		while(b>0){
			bx*=10;
			bx+=b%10;
			b/=10;
		}
		ax+=bx;
		while(ax>0){
			ans*=10;
			ans+=ax%10;
			ax/=10;
		}
		printf("%d\n",ans);
	}
} 
