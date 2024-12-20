#include <stdio.h>
long long int a[7490],n;
int main(){
	for(int i=0;i<7490;++i)
		a[i]=1;
	for(int i=5;i<7490;++i)
		a[i]+=a[i-5];
	for(int i=10;i<7490;++i)
		a[i]+=a[i-10];
	for(int i=25;i<7490;++i)
		a[i]+=a[i-25];
	for(int i=50;i<7490;++i)
		a[i]+=a[i-50];
	while(scanf("%lld",&n)>0){
		printf("%lld\n",a[n]);
	}
} 
