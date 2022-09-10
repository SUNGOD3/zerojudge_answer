#include <stdio.h>
long long int a[30001],n;
int main(){
	for(int i=0;i<30001;++i)
		a[i]=1;
	for(int i=5;i<30001;++i)
		a[i]+=a[i-5];
	for(int i=10;i<30001;++i)
		a[i]+=a[i-10];
	for(int i=25;i<30001;++i)
		a[i]+=a[i-25];
	for(int i=50;i<30001;++i)
		a[i]+=a[i-50];
	while(scanf("%lld",&n)>0){
		if(a[n]==1)
			printf("There is only 1 way to produce %lld cents change.\n",n);
		else
			printf("There are %lld ways to produce %lld cents change.\n",a[n],n);
	}
} 
