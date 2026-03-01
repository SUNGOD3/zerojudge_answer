#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    double a,b;
    char x[500],y[500],op;
    while(scanf("%s %c %s",&x,&op,&y)==3){
        a = atof(x);
        b = atof(y);
        printf("%s %c %s\n",x,op,y);
        if(a>2147483647)printf("first number too big\n");
        if(b>2147483647)printf("second number too big\n");
        if(op=='+'&&a+b>2147483647)printf("result too big\n");
        if(op=='*'&&a*b>2147483647)printf("result too big\n");
    }
return 0;
}
