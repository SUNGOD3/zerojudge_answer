#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
char it=0,n,clab,score,ans[9];
inline void write(int x) {
	int stk[4],*ptr(&stk[0]);
	while(x){*ptr=x%10;x/=10;++ptr;}
	while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
}
int main(){
	n=getchar_unlocked();
	n-='0';
	getchar_unlocked();
	while(ans[it]=getchar_unlocked()){
		if(ans[it]<'0')break;
		++it;
	}
	score=0;
	for(char i=it-1,c=1,tn=n,tmp=0;i>=0;++c,tn=n,tmp=0){
		while(tn--){
			if(i>=0)tmp+=ans[i]-'0';
			--i;
		}
		if(tmp>=score){
			clab=c;
			score=tmp;
		}
	}
	write(clab);
	putchar_unlocked(' ');
	write(score);
} 
