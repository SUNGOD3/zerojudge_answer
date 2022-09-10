#include <iostream>

using namespace std;

int main (){
	
	long long int n=0,i=1,j=2,ans=0;
	while(cin >> n){
		if(n>=3){
			while(n>=3){
			ans=i+j;
			i=j;
			j=ans;
			n--;
			}
			cout << ans << endl;
			ans=0;
			i=1;
			j=2;
		}
		else{
			cout << n << endl; 
		}
		
	}
} 
