#include<bits/stdc++.h>
using namespace std;
long long n,m;
inline long long read(){
	long long a(0);
	char c('0');
	while(c>='0'){
		a=(a<<3)+(a<<1)+c-'0';
		c=getchar_unlocked();
	}
	return a;
}
inline void write(long long x) {
	if(x==0)
		putchar_unlocked('0');
	else{
		long long stk[18],*ptr(&stk[0]);
		while(x){*ptr=x%10;x/=10;++ptr;}
		while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
	}
} 
long long Allot(long long now) {
	if (now < m)
		return 0;
	if (now < (m << 1))
		return 1;
	if (now < (m << 2) - 1)
		return 2;
	if (now & 1) {
		if ((now >> 1) & 1)
			return Allot(now >> 2) + 3 * Allot((now >> 2) + 1);
		return 3 * Allot(now >> 2) + Allot((now >> 2) + 1);
	}
	return Allot(now >> 1) << 1;
}
int main(){
    cin.tie(0); ios::sync_with_stdio(0);
    while(n=read()){
    	m=read();
    	if(n<m)puts("0");
    	else write(Allot(n)),puts("");
	}
}
 
