#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int a=0;
	bool ans=true;
	while(scanf("%d",&a)){
		if(a%2==0&&a!=2){
			printf("no\n");
			ans=false;
		}
		else{
			for(int i=3;i<=sqrt(a);i+=2){
				if(a%i==0){
					printf("no\n");
					ans=false;
					break; 
				}
			}
		}
		if(ans==true){
			printf("yes\n");
		}
		ans=true;
		return 0;
	}
} 
