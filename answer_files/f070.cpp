#include <stdio.h>
int main(){
	long long int a,b,c,d,e,f;
	scanf("%lld%lld%lld%lld%lld%lld",&a,&b,&c,&d,&e,&f);
	long long int k=a*c*e,m1=c*e,m2=a*e,m3=a*c,M1=m1,M2=m2,M3=m3;
	while(M1%a!=1)M1+=m1;
	while(M2%c!=1)M2+=m2;
	while(M3%e!=1)M3+=m3;
	long long int M=M1*b+M2*d+M3*f;
	if(M>k)M%=k;
	printf("%lld\n",M);
} 
