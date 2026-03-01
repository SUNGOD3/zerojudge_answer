#include<stdio.h>
#include <math.h>
int main(){
int n,k;
while(scanf("%d",&n)>0){
int a=sqrt(n);
k=n-a*a;
printf("%d\n",k);
}
}
