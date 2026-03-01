#include <stdio.h>
int main(){
	int a,b,total;
	scanf("%d%d", &a,&b);
	for(a=a,total=0;a<=b;a++){
		if(a%2==0){
			total=total+a;
			a++;
		}
	}
	printf("%d\n", total);
	return 0;
}
