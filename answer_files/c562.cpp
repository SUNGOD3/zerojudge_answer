#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
inline void write(int x) {
	if(x==0){putchar_unlocked('0');return;}
	int stk[9],*ptr(&stk[0]);
	while(x){*ptr=x%10;x/=10;++ptr;}
	while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
}
int main(){
	int ans=0;
	char a;
	while(a=getchar_unlocked()){
		if(a<'0'){
			if(a==-1)break;
			write(ans);
			putchar_unlocked('\n');
			ans=0;
		}
		else if(a=='8')
			ans+=2;
		else if(a=='9'||a=='6'||a=='0')
			++ans;
	}
} 
