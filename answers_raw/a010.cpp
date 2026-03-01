#include <iostream>
 int main (){
 	int a,j;
 	while(std::cin >> a){
 		for(int i=2,b=a;i<=b;i++){//20=2*2*5
 			if(a%i==0){
 				for(std::cout << i ,a/=i,j=1;a%i==0;j++,a/=i){}
				(j>1)?printf("^%d",j):1;
				(a!=i && a!=1)?printf(" * "):printf("\n");
			}
		}
	 }
 }
