#include <iostream>

using namespace std;

int main(){
	
	long long int a=0,ans=0,p=0;
	while(cin >> a){
		long long int b[a];
		for(int i=0;i<a;i++){
			scanf("%lld",&b[i]);
		}
		for(int i=0;i<a-1;i++){
			p+=b[i];
			ans+=b[i+1]*p;
		}
		printf("%lld\n",ans);
		a=0;ans=0;p=0;
	}
} 
