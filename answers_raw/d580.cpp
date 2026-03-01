#include <stdio.h>
int main(){
int b[10000]={0,1,2},a;
for(int c=3;c<=10000;c++)
b[c]=(b[c-2]+b[c-1])%2012;
while(scanf("%d",&a)>0)
printf("%d\n",b[a]);
}
