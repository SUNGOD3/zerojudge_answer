#include <stdio.h>
#include <set>
using namespace std;
inline int read(){
	int a(0);
	char c('0');
	while(c>='0'){
		a=(a<<3)+(a<<1)+c-'0';
		c=getchar_unlocked();
	}
	return a;
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
multiset <int> ans;
int n,is;
int main(){
	while(is=read()){
		if(is==1){
			n=read();
			ans.insert(n);
		}
		else if(is==3){
			write(*ans.begin());
			putchar_unlocked('\n');
			ans.erase(ans.begin()); 
		}
		else{
			write(*(--ans.end()));
			putchar_unlocked('\n');
			ans.erase(--ans.end());
		}
	}
} 
