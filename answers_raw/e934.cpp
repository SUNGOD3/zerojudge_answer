#include <stdio.h>
int main(){
	char a;
	while(scanf("%c",&a)>0){
		if(a=='T')
			printf("A");
		else if(a=='A')
			printf("U");
		else if(a=='G')
			printf("C");
		else if(a=='C')
			printf("G");
	}
} 
