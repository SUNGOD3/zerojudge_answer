#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
char p,ca,a[18]={1},prime[34],used[18]={1,1};
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
	if(x<10)
		putchar_unlocked(x+'0');
	else{
		putchar_unlocked(x/10+'0');
		putchar_unlocked(x-10+'0');
	}
}
inline void bfs(int it){
	if(it==p){
		if(prime[a[p-1]+1])return;
		for(int i=0;i<p;++i){
			write(a[i]);
			putchar_unlocked(' ');
		}
		putchar_unlocked('\n');
		return;
	}
	for(int i=2;i<=p;++i){
		if(!used[i]&&!prime[i+a[it-1]]){
			a[it]=i;
			used[i]=1;
			bfs(it+1);
			used[i]=0;
		}
	}
}
int main(){
	for(int i=2;i<=6;++i)
		for(int j=i+i;j<34;j+=i)
			prime[j]=1;
	while(p=read()){
		putchar_unlocked('C');
		putchar_unlocked('a');
		putchar_unlocked('s');
		putchar_unlocked('e');
		putchar_unlocked(' ');
		write(++ca);
		putchar_unlocked(':');
		putchar_unlocked('\n');
		for(int i=2;i<=p;++i){
			used[i]=0;
			a[i]=0;
		}
		bfs(1);
		putchar_unlocked('\n');
	}
} 
