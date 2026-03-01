#include <stdio.h>
char a;
int b,c;
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
	while(a=getchar_unlocked()){
		if(a>='0'&&a<='9'){
			c*=10;
			c+=a-'0';
		}
		else if(a>='A'&&a<='Z'){
			b*=26;
			b+=a-'A'+1;
		}
		else{
			break;
		}
	}
	write(b*c);
} 
