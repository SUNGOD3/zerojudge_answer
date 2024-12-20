#include <stdio.h>
int main(){
	int  b,c,b2;
	long long int ans;
	scanf("%d",&b);
	while (scanf("%d%d",&b,&c)>0){
		b2=b;
		for (ans=1;b>c;b--)
			ans*=b;
		for (;(b2-c)>0;c++)
			ans/=(b2-c);
		printf("%lld\n",ans);
	}
}
