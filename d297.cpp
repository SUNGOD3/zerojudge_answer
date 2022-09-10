#include <stdio.h>
int main(){
long long int i;
while(scanf("%lld",&i)>0){
long long int m,n=i-1;
(n%2)?m=(n+3)/2:m=(n+2)/2;
printf("%lld\n",m*(2*i*i-(2*i-1)*(m-1))/2);}
} 
