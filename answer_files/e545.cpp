#include <stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	while(scanf("%d",&a)>0){
		int b1=0,b2=0,c=a,d=0,n=1;
		while(a>0){
			if(a%2){
				b1++;
			}
			a>>=1;
		}
		while(c>0){
			d+=c%10*n;
			c/=10;
			n*=16;
		}
		while(d>0){
			if(d%2){
				b2++;
			}
			d>>=1;
		}
		printf("%d %d\n",b1,b2);
	}
} 
