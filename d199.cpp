#include <stdio.h>
#include <math.h> 
int main(){   
    long long int p, q, r;   
    while(scanf("%lld %lld %lld",&p,&q,&r)>0){
   		printf("%.0f\n",sqrt((p+q+r)*(p+q+r)-4*p*r));
	}
    return 0;   
}  
