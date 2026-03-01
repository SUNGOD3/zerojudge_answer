#include <stdio.h>
int f(int n,int s,int t){
    if(n==0) return 0;
    f(n-1,s,198-s-t);
    printf("Move ring %d from %c to %c\n",n,s,t);
    f(n-1,198-s-t,t);
    return 0;
}
int main(){
    int m;
    while(scanf("%d",&m)>0)
    	f(m,65,67);
}
