#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
#include <algorithm>
inline int read(){
	int a(0);
	char c('0');
	while(c>='0'){
		a=(a<<3)+(a<<1)+c-'0';
		c=getchar_unlocked();
	}
	return a;
}
struct plant{
    int s,e;
};
plant P[10005];
int DP[10005];
inline bool cmp(plant a,plant b){
    return a.s<b.s;
}
int main(){
    int M=read(),T=read();
    for(int i=0;i<T;++i){
    	P[i].s=read();
    	P[i].e=read();
    }
    std::sort(P,P+T,cmp);
    for(int i=0;i<T;++i){
        int len=DP[P[i].s]+(P[i].e-P[i].s);
        for(int j=P[i].e;j<=M;++j){
            if(len<=DP[j]) break;
            DP[j]=len;
        }
    }
    printf("%d\n",DP[M]);
}
