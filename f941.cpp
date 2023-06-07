#include <stdio.h>
using namespace std;
int a[3];
char c;
inline void write(int x) {
	if(x==0)
		putchar_unlocked('0');
	else{
		int stk[9],*ptr(&stk[0]);
		while(x){*ptr=x%10;x/=10;++ptr;}
		while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
	}
}
int main(){
	while(1){
		c=getchar_unlocked();
		if(c=='1'){
			++a[0];
			if(a[1])--a[1];
			else if(a[2])--a[2];
		}
		else if(c=='2'){
			++a[1];
			if(a[2])--a[2];
		}
		else if(c=='3'){		
			++a[2];
		} 
		else{
			break;
		}
	}
	write(a[0]+a[1]+a[2]);
} 
