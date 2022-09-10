#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <iostream>
#include <map>
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
inline int ma(int n){
	int a[10]={0},rt=0;
	while(n){
		++a[n%10];
		n/=10;
	}
	for(int i=9;i>=0;--i){
		while(a[i]){
			a[i]--;
			rt*=10;
			rt+=i;
		}
	}
	return rt;
}
inline int mi(int n){
	int rt=0;
	while(n){
		rt*=10;
		rt+=n%10;
		n/=10;
	}
	return rt;
}
int main(){
	int n;
	while(n=read()){
		cout << "Original number was " ;
		write(n);cout << "\n";
		int c=0;
		map <int,int> fd;
		while(fd[n]!=1){
			fd[n]=1;
			++c;
			int a=ma(n),b=mi(a);
			n=a-b;
			write(a);cout << " - " ;
			write(b);cout << " = " ;
			write(n);cout << "\n";
		}
		cout << "Chain length " ;
		write(c);
		cout << "\n";
	}
} 
