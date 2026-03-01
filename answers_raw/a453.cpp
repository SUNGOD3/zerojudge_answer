#include <stdio.h>
#include <cmath>
using namespace std;
main(){
	int a,b,c,n;
	scanf("%d",&n);
	while(n--){
		scanf("%d%d%d",&a,&b,&c);
		(sqrt(b*b-a*4*c)==int(sqrt(b*b-a*4*c)))?printf("Yes\n"):printf("No\n"); 
	}
}
