#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int a=0;
	bool ans=true;
	while(scanf("%d",&a)){
		if(a==0){
			return 0;
		}
		else if(a==1){
			printf("1\n");
			ans=false;
		}
		else if(a%2==0&&a!=2){
			printf("1\n");
			ans=false;
		}
		else{
			for(int i=3;i<=sqrt(a);i+=2){
				if(a%i==0){
					printf("1\n");
					ans=false;
					break; 
				}
			}
		}
		if(ans==true){
			printf("0\n");
		}
		ans=true;
	}
} 
