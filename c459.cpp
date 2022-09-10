#include <stdio.h>
#include <cmath>
int main(){
	int a,b,bv,n,i,j;
	while(scanf("%d%d",&a,&b)>0){
		bv=0;n=b;
		for(j=0;n>0;j++)//j ¦ì¼Æ 
			n/=10;n=b;	
		for(i=0;i<j;i++,b/=10)
			bv+=(b%10)*pow(a,i);		
		for(i=0;i<j;i++,n/=10)
			b+=pow(n%10,j);
		if(b==bv)
			printf("YES\n");
		else
			printf("NO\n");			
	}
} 
