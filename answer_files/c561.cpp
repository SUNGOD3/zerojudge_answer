#include <stdio.h>
int main(){
	int a,max,i;
	scanf("%d",&a);
	int b[a],c=0;
	for(i=0,max=0;i<a;i++,c=0){
		scanf("%d",&b[i]);
		while(b[i]>0){
			c+=b[i]%10;
			c*=10;
			b[i]/=10;
		}
		c/=10;
		if(c>max)
			max=c;
	}
	printf("%d\n",max);
} 
