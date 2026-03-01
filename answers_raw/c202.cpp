#include <stdio.h>
long long int gcd(long long int a,long long int b){
	if(b==0)return a;
	return gcd(b,a%b);
}
int main(){
	long long int a,ans=0;
	scanf("%lld",&a);
	long long int b[a];
	for(int i=0;i<a;i++)
		scanf("%lld",&b[i]);
	for(int i=0;i<a-1;i++){
		if(b[i]>b[i+1])
			b[i+1]=gcd(b[i],b[i+1]);
		else
			b[i+1]=gcd(b[i+1],b[i]);
		if(b[i+1]==1){
			ans=1;
			break;
		}
	}	
	if(ans)
		printf("1");
	else
		printf("%lld",b[a-1]);
} 
