#include <iostream>

using namespace std; 

int main (){
	
	int a,b,c=0;
	int s=0;
	int ans=0;
	while(cin >> a >> b >> c){
		s=0;
		s=(a+b+c)/2;
		ans=s*(s-a)*(s-b)*(s-c);
		cout << ans;
	}	
}
