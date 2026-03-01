#include <stdio.h>
int main(){
	long double a,b;
	char c;
	scanf("%llf%llf %c",&a,&b,&c);
	if(c=='T'){
		if(b>a)
			printf("No Money");
		else{
			a-=b;
			if(a<0.05)
				printf("%c 0.00",c);
			else
				printf("%c %.2llf",c,a);
		}
	}
	else if(c=='U'){
		b*=30.9;
		if(b>a)
			printf("No Money");
		else{
			a-=b;
			a/=30.9;
			if(a<0.05)
				printf("%c 0.00",c);
			else
				printf("%c %.2llf",c,a);
		}
	}
	else if(c=='J'){
		b*=0.28;
		if(b>a)
			printf("No Money");
		else{
			a-=b;
			a/=0.28;
			if(a<0.05)
				printf("%c 0.00",c);
			else
				printf("%c %.2llf",c,a);
		}
	}
	else if(c=='E'){
		b*=34.5;
		if(b>a)
			printf("No Money");
		else{
			a-=b;
			a/=34.5;
			if(a<0.05)
				printf("%c 0.00",c);
			else
				printf("%c %.2llf",c,a);
		}
	}
} 
