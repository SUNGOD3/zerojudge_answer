#include <stdio.h>
int f91(int N){
	if(N<=100)
		return f91(f91(N+11));
	return N-10; 
}
int main(){
	int a;
	while(scanf("%d",&a)!=EOF){
		if(a==0)
			break;
		printf("f91(%d) = %d\n",a,f91(a));
	}
} 
