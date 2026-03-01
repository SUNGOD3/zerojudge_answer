#include <stdio.h>
#include <cmath>
int gcd(int a,int b){
    return (b==0)?a:gcd(b,a%b);
}
int main(){
	int a,b,c,d,e,f;
	while(scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f)){
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0)break;
		printf("%d\n",gcd(abs(a-c),abs(b-d))+gcd(abs(a-e),abs(b-f))+gcd(abs(c-e),abs(d-f)));
	}
	return 0;
} 
