#include <iostream>
using namespace std;
int main(){
	int a,b;
	while(cin >> a){
		if(a==0)break;
		int max=0,now=0;
		while(a--){
			cin >> b;
			now+=b;
			if(now<0)
				now=0;
			else if(now>max)
				max=now;	
		}
		if(max==0)
			cout << "Losing streak.\n";
		else
			cout << "The maximum winning streak is " << max << ".\n";	
	}
} 
