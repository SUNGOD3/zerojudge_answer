#include <stdio.h>
int main(){
	int a,b,c,d;
	scanf("%d",&a);
	while(scanf("%d%d%d%d",&a,&b,&c,&d)>0){
		if(a==b&&b==c&&c==d)
			printf("square\n");
		else if ((a==b&&c==d)||(a==c&&b==d)||(a==d&&b==c))
      		printf("rectangle\n");
    	else if ((a+b+c<=d)||(a+b+d<=c)||(a+c+d<=b)||(b+c+d<=a))
    		printf("banana\n");
		else
			printf("quadrangle\n");
	} 
} 
