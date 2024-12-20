#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <stdio.h>
struct ans{
	int n,time;
};
int c;
ans a[101];
int main(){
	while(scanf("%d",&c)>0){
		for(int i(0);i<100;++i){
			if(a[i].time==0){
				a[i].n=c;
				a[i].time=1;
				break;
			}
			else if(a[i].n==c){
				++a[i].time;
				break;
			}
		}
	}
	for(int i(0);i<100;++i){
		if(a[i].time==0)break;
		printf("%d %d\n",a[i].n,a[i].time);
	}
} 
