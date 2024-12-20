#include <stdio.h>
int main(){
	int a=0,b=1;scanf("%d",&a);
	while(scanf("%d",&a)>0){
		if((a%4==0&&a%100!=0)||a%400==0)
			printf("Case %d: a leap year\n",b);
		else
			printf("Case %d: a normal year\n",b);b++;
	}
} 
