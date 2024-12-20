#include <iostream>
using namespace std;
int main(){
	long long int a=0,ans=0;
	while(scanf("%lld",&a) && a){
		if(a>0){
			while(a%2==1){
				ans++;
				a/=2;
			}
			printf("%d\n",ans);
			ans=0;
		}
	}
} 
