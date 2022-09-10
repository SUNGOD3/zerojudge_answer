#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	int b=1,sum=0;
	for(;b<=n;b+=a[n-1])
		sum+=a[b-1];
	printf("%d %d",(sum-1)%n+1,a[(sum-1)%n]);
} 
