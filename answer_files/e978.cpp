#include <stdio.h>
int main(){
	int a;
	while(scanf("%d",&a)>0){
		if(a==0)break;
		putchar_unlocked('1');
		putchar_unlocked('/');
		putchar_unlocked('2');
		putchar_unlocked('\n');
	}
} 
