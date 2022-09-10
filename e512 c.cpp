#include <stdio.h>
int main(){
	double a,b,c,d,e,f,g,h;
	while(scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f,&g,&h)>0){
		if(a==e&&b==f)printf("%.3lf %.3lf\n",c+g-a,d+h-b);
		else if(c==g&&d==h)printf("%.3lf %.3lf\n",a+e-c,b+f-d);
		else if(a==g&&b==h)printf("%.3lf %.3lf\n",c+e-a,d+f-b);
		else printf("%.3lf %.3lf\n",a+g-c,b+h-d);
	}
}
