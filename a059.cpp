#include <iostream>
#include <math.h>

using namespace std;

int main (){
	
	int n=0;
	int a=0,b=0;
	long long int sum=0;
	
	while(cin >> n){
		for(int i=1;i<=n;i++){
			cin >> a >> b;
			for(int j=a;j<=b;j++){
				float x=sqrt(j);
				if(x==sqrt(j)){
					sum+=j;
				}
			}
			cout << "Case " << i << ": " << sum << endl;
			sum=0;
			 
		}
	}
} 
