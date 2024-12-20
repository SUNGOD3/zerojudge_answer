#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <iostream>
#include <algorithm>
using namespace std;
int a[500001],b[500001],ait,bit;
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
	int t,p,n;
	t=read();
	while(t--){
		p=read();
		ait=0;
		bit=0;
		while(p--){
			n=read();
			if(n>0){
				a[ait]=n;
				++ait;
			}
			else{
				b[bit]=(-n);
				++bit;
			}
		}
		sort(a,a+ait);
		sort(b,b+bit);
		int ans1=0,ans2=0,i=ait-1,j=bit-1,now=1000000;
		while(1){
			while(i>=0&&now<a[i])--i;
			if(i<0)break;
			++ans1;
			now=a[i];
			while(j>=0&&now<b[j])--j;
			if(j<0)break;
			++ans1;
			now=b[j];
		}
		now=1000000;i=ait-1;j=bit-1;
		while(1){
			while(j>=0&&now<b[j])--j;
			if(j<0)break;
			++ans2;
			now=b[j];
			while(i>=0&&now<a[i])--i;
			if(i<0)break;
			++ans2;
			now=a[i];
		}
		write(max(ans1,ans2));
		putchar_unlocked('\n');
	}
} 
