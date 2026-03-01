#include <iostream>
#include <string>
using namespace std;
int main(){
	int a=1;
	while(a!=0){
		int max=11,min=0;
		string b;
		while(1){
			cin >> a >> b;
			cin >> b;
			if(a==0)
				break;
			if(b=="high"){
				if(a<max)
					max=a;
			}
			else if(b=="low"){
				if(a>min)
					min=a;
			}
			else{
				(max>a&&a>min)?cout << "Stan may be honest\n":cout << "Stan is dishonest\n";
				break;	
			}
		}
	}
} 
