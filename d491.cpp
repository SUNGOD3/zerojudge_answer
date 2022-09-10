#include <stdio.h>
int main(){
	int a,b,total;
	scanf("%d%d", &a,&b);
	if(a>b){
		a=a^b;
		b=a^b;
		a=a^b;
	}
		for(total=0;a<=b;){
			if(a%2==0){
				total=total+a;
				a+=2;
			}
			else
				a++;
	}
	printf("%d\n", total);
	return 0;
}
