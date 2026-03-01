#include <stdio.h>
int main(){
	float a,b,c,d,e,f;
	scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
		if(a*e==b*d&&a*f==c*d)
			printf("Too many");
		else if(a/d==b/e&&a/d!=c/f)
			printf("No answer");
		else if((a*e-d*b)!=0)
			printf("x=%.2f\ny=%.2f",(c*e-f*b)/(a*e-d*b),(c*d-f*a)/(b*d-e*a));
		else
			printf("Too many");
} 
