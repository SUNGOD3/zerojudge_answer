#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
int pt[110001],it;
int adp[110001],n,k;
char p[110001]={1};
inline int read(){
	int a(0);
	char c('0');
	while(c>='0'){
		a=(a<<3)+(a<<1)+c-'0';
		c=getchar_unlocked();
	}
	return a;
}
int main(){
	for(int i=2;i<=332;++i)
		for(int j=i+i;j<=110000;j+=i)
			p[j]=1;
	for(int i=0;i<=110000;++i)
		if(p[i]==0){
			pt[it]=i;
			if(it>0)
				adp[it]=pt[it]+adp[it-1];
			else
				adp[it]=pt[it];
			++it;
		}
	while(n=read()){
		k=read();
		if(adp[n-1]<k)
			putchar_unlocked('#');
		else{
			int it2=0;
			while(adp[it2]<k)
				++it2;
			int total=(k-adp[it2-1])%3;
			if(total==1)
				putchar_unlocked('A');
			else if(total==2)
				putchar_unlocked('B');
			else
				putchar_unlocked('C');
		}
		putchar_unlocked('\n');
	}
} 
