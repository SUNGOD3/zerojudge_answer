#include <stdio.h>
int main(){
int a,b,i=0;
scanf("%d%d",&a,&b);
for(int j=1,br=b/a+1;j!=br;++i)j<<=1;
printf("%d\n", i);
} 
