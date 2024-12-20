#include <stdio.h>
#include <algorithm>
using namespace std;
int a[101],it,tmp;
inline int read(){
	int a(0),f(1);
	char c('0');
	while(c>='0'||c=='-'){
		if(c=='-'){
			f=-1;
			c=getchar_unlocked();
		}
		a=(a<<3)+(a<<1)+c-'0';
		c=getchar_unlocked();
	}
	return a*f;
}
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
	while(tmp=read()){
		if(tmp==-1)break;
		a[it]=tmp;
		++it;
	}
	sort(a,a+it);
	tmp=read();
	write(a[it-tmp]); 
} 
