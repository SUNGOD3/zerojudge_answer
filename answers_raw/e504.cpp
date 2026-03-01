#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
inline void write(int x) {
	if(x==0){
		putchar_unlocked('0');
		return;
	}
	int stk[9],*ptr(&stk[0]);
	while(x){*ptr=x%10;x/=10;++ptr;}
	while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
}
int main(){
	char a,c,ans;
	while(a=getchar_unlocked()){
		if(a=='*')break;
		else if(a=='\n'){
			write(ans);
			putchar_unlocked('\n');
			ans=0;
		}
		else if(a=='/'){
			if(c==64)++ans;
			c=0;
		}
		else if(a=='W')c+=64;
		else if(a=='H')c+=32;
		else if(a=='Q')c+=16;
		else if(a=='E')c+=8;
		else if(a=='S')c+=4;
		else if(a=='T')c+=2;
		else ++c;
	}
} 
