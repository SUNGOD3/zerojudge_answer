#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
inline void write(long long int x) {
	if(x==0){
		putchar_unlocked('0');
		return;
	}
	long long int stk[9],*ptr(&stk[0]);
	while(x){*ptr=x%10;x/=10;++ptr;}
	while(--ptr>=(&stk[0])){putchar_unlocked(*ptr+'0');}
}
inline long long int sumxor(long long int N){
	if(!N)return 0;
	long long int ans=1;
	while(N){
		if(N%2==0)ans<<=1;
		N/=2;
	}
	return ans;
} 
int main(){
	char c;
	long long int n=0;
	while(c=getchar_unlocked()){
		if(c==-1)
			break;
		if(c<'0'){
			write(sumxor(n));
			putchar_unlocked('\n');
			n=0;
		}
		else{
			n*=10;
			n+=c-48;
		}
	}
} 
