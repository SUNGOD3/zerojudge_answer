#include <stdio.h>
char ans[16]={'3','1','4','1','5','9','2','6','5','3','5','8','9','7','9','3'};
int main(){
	char a=getchar_unlocked(),b=getchar_unlocked();
	(a=='1'&&b>='0')?a=10+b-48:a-=48;
	putchar_unlocked(ans[a]);
}
