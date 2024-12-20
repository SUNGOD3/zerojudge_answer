#include <stdio.h>
int main(){
	int a,b,c;
	while(scanf("%d%d",&a,&b)>0){
		c=a*60+b;
		scanf("%d%d",&a,&b);
		b+=a*60;
		if(b>=c)
			printf("%d %d\n",(b-c)/60,(b-c)%60);
		else
			printf("%d %d\n",(b-c+1440)/60,(b-c+1440)%60);
	}
} 
