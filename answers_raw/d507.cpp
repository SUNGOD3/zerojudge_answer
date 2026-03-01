#include <stdio.h>
int main() {
int a,b,c;
while (scanf("%d%d%d",&a,&b,&c)>0) {
	if(a>b&&a>c){
		a=a^c;
		c=a^c;
		a=a^c;
	}
	else if(b>c){
		b=b^c;
		c=b^c;
		b=b^c;
	}
	if (a*a+b*b==c*c)
		printf("right triangle\n");
	else if (a*a+b*b<c*c)
		printf("obtuse triangle\n");
	else
		printf("acute triangle\n");
}
}
